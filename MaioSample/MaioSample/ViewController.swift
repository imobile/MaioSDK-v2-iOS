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

class ViewController: UIViewController {

    private let rewarded = MyRewardedAd()

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
    }

    func didReward(_ ad: MaioRewarded, reward: RewardData) {
        logging(content: "maio rewarded did reward: \(reward.value)")
    }
}
