# API References

## MaioRequest

_2.0.0 +_

```swift
class MaioRequest : NSObject
```

広告リクエストを表すクラス。

### init(zoneId: String, testMode: Bool)

_2.0.0 +_

```swift
init(zoneId: String, testMode: Bool)
```

#### Parameters

- `zoneId`
    - maio の管理画面から発行されるゾーン識別子
- `testMode`
    - テストモードとしてリクエストするかどうかのフラグ。`true`: テストモード有効 `false`: 本番稼働

#### Return Value

`MaioRequest` オブジェクト。


### let zoneId: String

_2.0.0 +_

```swift
let zoneId: String
```

パラメータに与えた、maio の管理画面から発行されるゾーン識別子。


### let testMode

_2.0.0 +_

```swift
let testMode : Bool
```

パラメータに与えた、テストモードとしてリクエストするかどうかのフラグ。
`true`: テストモード有効 `false`: 本番稼働


## MaioVersion

_2.0.0 +_

```swift
class MaioVersion : NSObject
```

maio SDKのバージョンを表すオブジェクト。


### static let shared: MaioVersion

_2.0.0 +_

```swift
static let shared: MaioVersion
```

SDKのバージョンを表す共有インスタンス。


### func toString() -> String

_2.0.0 +_

```swift
func toString() -> String
```

SDKのバージョンを表す `String` を返す。

#### Return Value

SDK のバージョンを示す、[Semantic Versioning 2.0.0](https://semver.org/lang/ja/) 形式の文字列。
