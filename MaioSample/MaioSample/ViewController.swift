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

    var rewarded: MaioRewarded?

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func loadRewarded(_ sender: Any) {
        let request = MaioRequest(zoneId: zoneIdForRewarded, testMode: true)
        rewarded = MaioRewarded.loadAd(request: request, callback: nil)
    }

    @IBAction func showRewarded(_ sender: Any) {
        rewarded?.show(viewContext: self, callback: nil)
    }
}

