## MaioBannerListener

_2.1.7 +_

```swift
protocol MaioBannerListener: AnyObject
```

バナー広告に関する通知を受け取るためのプロトコル。

### optional func didLoad(_ ad: MaioBannerView)

_2.1.7 +_

```swift
optional func didLoad(_ ad: MaioBannerView)
```

広告の読み込みが完了した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス

### optional func didFailToLoad(_ ad: MaioBannerView, errorCode: Int)

_2.1.7 +_

```swift
optional func didFailToLoad(_ ad: MaioBannerView, errorCode: Int)
```

広告の読み込みに失敗した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。

### optional func didMakeImpression(_ ad: MaioBannerView)

_2.1.7 +_

```swift
optional func didMakeImpression(_ ad: MaioBannerView)
```

広告のインプレッションが記録された時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス

### optional func didClick(_ ad: MaioBannerView)

_2.1.7 +_

```swift
optional func didClick(_ ad: MaioBannerView)
```

広告のクリックが発生した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス


### optional func didLeaveApplication(_ ad: MaioBannerView)

_2.1.7 +_

```swift
optional func didLeaveApplication(_ ad: MaioBannerView)
```

アプリケーションからの離脱が発生した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス

### optional func didFailToShow(_ ad: MaioBannerView, errorCode: Int)

_2.1.7 +_

```swift
optional func didFailToShow(_ ad: MaioBannerView, errorCode: Int)
```

広告の表示に失敗した時に呼ばれるイベント。

#### Parameters

- `ad`
    - 呼び出し元の広告インスタンス
- `errorCode`
    - エラー理由を示す値。詳細は `ErrorCode` を参照。
