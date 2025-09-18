// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MaioSDK",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "MaioSDK",
            targets: ["MaioSDKLocalBinary"]),
    ],
    targets: [

        // It's possible to specify binary packages via URL, but it require the checksum of the zip binary and an already uploaded SDK.
        // Since additional tasks would be needed after updating the SDK, We want to avoid that situation.

        //.binaryTarget(
        //    name: "MaioSDKRemoteBinary",
        //    url: "https://github.com/imobile/MaioSDK-v2-iOS/releases/download/v2.1.5/Maio.xcframework.zip",
        //    checksum: "f70d6959122bdad111685735de5ff4239d905b9a2050b7e810e1fb9679eb595c"),

        .binaryTarget(name: "MaioSDKLocalBinary", path: "Maio.xcframework")

    ]
)
