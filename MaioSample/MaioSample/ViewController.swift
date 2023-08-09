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

    private var rewarded: MaioRewarded?

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func loadRewarded(_ sender: Any) {
        let request = MaioRequest(zoneId: zoneIdForRewarded, testMode: true)
        rewarded = MaioRewarded.loadAd(request: request, callback: self)
    }

    @IBAction func showRewarded(_ sender: Any) {
        rewarded?.show(viewContext: self, callback: nil)
    }

    fileprivate func logging(content: String) {
        let dateformatter = DateFormatter()
        dateformatter.dateFormat = "yyyy-MM-dd HH:mm:ss.SSSSSSZ"
        dateformatter.locale = Locale(identifier: "ja_JP")

        print(dateformatter.string(from: Date()), "[Logging]", "\(content)")
    }
}


extension ViewController: MaioRewardedLoadCallback {
    func didLoad(_ ad: MaioRewarded) {
        self.logging(content: "maio rewarded did load")
    }

    func didFail(_ ad: MaioRewarded, errorCode: Int) {
        self.logging(content: "maio rewarded did fail: errorcode: \(errorCode)")
    }
}
