//
//  ViewController.swift
//  MaioSample
//
//  Created by im-ttmskk on 2023/08/03.
//  Copyright © 2023 Maio. All rights reserved.
//

import UIKit
import Maio

let zoneIdForRewarded = "DemoPublisherZone"
let zoneIdForInterstitial = "DemoPublisherZoneSkippable"

class ViewController: UIViewController {

    private let rewarded = MyRewardedAd()
    private let interstitial = MyInterstitialAd()

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func loadRewarded(_ sender: Any) {
        rewarded.loadAd()
    }

    @IBAction func showRewarded(_ sender: Any) {
        rewarded.showAd(viewController: self)
    }

    @IBAction func loadInterstitial(_ sender: Any) {
        interstitial.loadAd()
    }

    @IBAction func showInterstitial(_ sender: Any) {
        interstitial.showAd(viewController: self)
    }

}

fileprivate func logging(content: String) {
    let dateformatter = DateFormatter()
    dateformatter.dateFormat = "yyyy-MM-dd HH:mm:ss.SSSSSSZ"
    dateformatter.locale = Locale(identifier: "ja_JP")

    print(dateformatter.string(from: Date()), "[Logging]", "\(content)")
}

fileprivate class MyRewardedAd {
    private var rewarded: MaioRewarded?

    func loadAd () {
        let request = MaioRequest(zoneId: zoneIdForRewarded, testMode: true)
        rewarded = MaioRewarded.loadAd(request: request, callback: self)
    }

    func showAd(viewController: UIViewController) {
        rewarded?.show(viewContext: viewController, callback: self)
    }

    func dispose() {
        rewarded = nil
    }
}

extension MyRewardedAd: MaioRewardedLoadCallback, MaioRewardedShowCallback {
    func didLoad(_ ad: MaioRewarded) {
        logging(content: "maio rewarded did load")
    }

    func didFail(_ ad: MaioRewarded, errorCode: Int) {
        logging(content: "maio rewarded did fail: errorcode: \(errorCode)")
    }

    func didOpen(_ ad: MaioRewarded) {
        logging(content: "maio rewarded did open")
    }

    func didClose(_ ad: MaioRewarded) {
        logging(content: "maio rewarded did close")
        self.dispose()
    }

    func didReward(_ ad: MaioRewarded, reward: RewardData) {
        logging(content: "maio rewarded did reward: \(reward.value)")
    }
}

fileprivate class MyInterstitialAd {
    private var interstitial: MaioInterstitial?

    func loadAd () {
        let request = MaioRequest(zoneId: zoneIdForInterstitial, testMode: true)
        interstitial = MaioInterstitial.loadAd(request: request, callback: self)
    }

    func showAd(viewController: UIViewController) {
        interstitial?.show(viewContext: viewController, callback: self)
    }

    func dispose() {
        interstitial = nil
    }
}

extension MyInterstitialAd: MaioInterstitialLoadCallback, MaioInterstitialShowCallback {
    func didLoad(_ ad: MaioInterstitial) {
        logging(content: "maio interstitial did load")
    }

    func didFail(_ ad: MaioInterstitial, errorCode: Int) {
        logging(content: "maio interstitial did fail: errorcode: \(errorCode)")
    }

    func didOpen(_ ad: MaioInterstitial) {
        logging(content: "maio interstitial did open")
    }

    func didClose(_ ad: MaioInterstitial) {
        logging(content: "maio interstitial did close")
        self.dispose()
    }
}
