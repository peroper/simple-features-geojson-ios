// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "simple-features-geojson-ios",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "simple-features-geojson-ios",
            targets: ["simple-features-geojson-ios"]),
    ],
    dependencies: [
        .package(
            name: "simple-features-ios",
            url: "git@github.com:peroper/simple-features-ios.git",
            branch: "spm-support"
        )
    ],
    targets: [
        .binaryTarget(
            name: "simple-features-geojson-ios",
            path: "XCFrameworks/sf_geojson_ios.xcframework"
        )
    ]
)
