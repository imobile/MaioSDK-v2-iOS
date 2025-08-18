## MaioInterstitialLoadCallback

_2.0.0 +_

```swift
protocol MaioInterstitialLoadCallback: AnyObject
```

インタースティシャル広告の読み込みに関するコールバックを処理するプロトコル。

### optional func didLoad(_ ad:MaioInterstitial)

_2.0.0 +_

```swift
optional func didLoad(_ ad:MaioInterstitial)
```

広告の読み込みが完了した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。


### optional func didFail(_ ad:MaioInterstitial, errorCode: Int)

_2.0.0 +_

```swift
optional func didFail(_ ad:MaioInterstitial, errorCode: Int)
```

広告の読み込みが完了した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。


