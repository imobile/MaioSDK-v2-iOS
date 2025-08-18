## MaioInterstitialShowCallback

_2.0.0 +_

```swift
protocol MaioInterstitialShowCallback: AnyObject
```

インタースティシャル広告の表示に関するコールバックを処理するプロトコル。

### optional func didOpen(_ ad:MaioInterstitial)

_2.0.0 +_

```swift
optional func didOpen(_ ad:MaioInterstitial)
```

広告がオープンされた時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。


### optional func didClose(_ ad:MaioInterstitial)

_2.0.0 +_

```swift
optional func didClose(_ ad:MaioInterstitial)
```

広告がクローズされた時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。

### optional func didFail(_ ad:MaioInterstitial, errorCode: Int)

_2.0.0 +_

```swift
optional func didFail(_ ad:MaioInterstitial, errorCode: Int)
```

広告の表示に失敗した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。
