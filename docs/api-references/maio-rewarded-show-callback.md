## MaioRewardedShowCallback

_2.0.0 +_

```swift
protocol MaioRewardedShowCallback: AnyObject
```

リワード広告の表示に関するコールバックを処理するプロトコル。

### optional func didOpen(_ ad:MaioRewarded)

_2.0.0 +_

```swift
optional func didOpen(_ ad:MaioRewarded)
```

広告がオープンされた時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。


### optional func didClose(_ ad:MaioRewarded)

_2.0.0 +_

```swift
optional func didClose(_ ad:MaioRewarded)
```

広告がクローズされた時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。

### optional func didReward(_ ad: MaioRewarded, reward: RewardData)

_2.0.0 +_

```swift
optional func didReward(_ ad: MaioRewarded, reward: RewardData)
```

リワード付与のタイミングで通知されるイベント。
リワード動画広告の場合は視聴完了時、リワードプレイアブル広告の場合は広告で定められたタイミングで通知されます。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。
- `reward`
    - maio 管理画面にてゾーンに設定したリワード データ。


### optional func didFail(_ ad:MaioRewarded, errorCode: Int)

_2.0.0 +_

```swift
optional func didFail(_ ad:MaioRewarded, errorCode: Int)
```

広告の表示に失敗した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス。
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。

