# Simple Features GeoJSON iOS

#### Simple Features GeoJSON Lib ####

The Simple Features Libraries were developed at the [National Geospatial-Intelligence Agency (NGA)](http://www.nga.mil/) in collaboration with [BIT Systems](http://www.bit-sys.com/). The government has "unlimited rights" and is releasing this software to increase the impact of government investments by providing developers with the opportunity to take things in new directions. The software use, modification, and distribution rights are stipulated within the [MIT license](http://choosealicense.com/licenses/mit/).

### Pull Requests ###
If you'd like to contribute to this project, please make a pull request. We'll review the pull request and discuss the changes. All pull request contributions to this project will be released under the MIT license.

Software source code previously released under an open source license and then modified by NGA staff is considered a "joint work" (see 17 USC § 101); it is partially copyrighted, partially public domain, and as a whole is protected by the copyrights of the non-government authors and must be released according to the terms of the original open source license.

### About ###

[Simple Features GeoJSON](http://ngageoint.github.io/simple-features-geojson-ios/) is an iOS Objective-C library for writing and reading [Simple Feature](https://github.com/ngageoint/simple-features-ios) Geometries to and from GeoJSON.

### Usage ###

View the latest [Appledoc](http://ngageoint.github.io/simple-features-geojson-ios/docs/api/)

#### Read ####

```objectivec

//NSString *json = ...

SFGGeometry *geometry = [SFGFeatureConverter jsonToGeometry:json];
SFGeometry *simpleGeometry = [geometry geometry];

/* Read as a generic GeoJSON object, Feature, or Feature Collection */
//SFGGeoJSONObject *geoJSONObject = [SFGFeatureConverter jsonToObject:json];
//SFGFeature *feature = [SFGFeatureConverter jsonToFeature:json];
//SFGFeatureCollection *featureCollection = [SFGFeatureConverter jsonToFeatureCollection:json];

```

#### Write ####

```objectivec

//SFGeometry *geometry = ...

NSString *json = [SFGFeatureConverter simpleGeometryToJSON:geometry];

SFGFeature *feature = [SFGFeatureConverter simpleGeometryToFeature:geometry];
NSString *featureJSON = [SFGFeatureConverter objectToJSON:feature];

SFGFeatureCollection *featureCollection = [SFGFeatureConverter simpleGeometryToFeatureCollection:geometry];
NSString *featureCollectionJSON = [SFGFeatureConverter objectToJSON:featureCollection];

NSDictionary *tree = [SFGFeatureConverter simpleGeometryToTree:geometry];

```

### Build ###

Build this repository using Xcode and/or CocoaPods:

    pod repo update
    pod install

Open sf-geojson-ios.xcworkspace in Xcode or build from command line:

    xcodebuild -workspace 'sf-geojson-ios.xcworkspace' -scheme sf-geojson-ios build

Run tests from Xcode or from command line:

    xcodebuild test -workspace 'sf-geojson-ios.xcworkspace' -scheme sf-geojson-ios -destination 'platform=iOS Simulator,name=iPhone 8'

### Include Library ###

Include this repository by specifying it in a Podfile using a supported option.

Pull from [CocoaPods](https://cocoapods.org/pods/sf-geojson-ios):

    pod 'sf-geojson-ios', '~> 1.0.0'

Pull from GitHub:

    pod 'sf-geojson-ios', :git => 'https://github.com/ngageoint/simple-features-geojson-ios.git', :branch => 'master'
    pod 'sf-geojson-ios', :git => 'https://github.com/ngageoint/simple-features-geojson-ios.git', :tag => '1.0.0'

Include as local project:

    pod 'sf-geojson-ios', :path => '../simple-features-geojson-ios'

### Swift ###

To use from Swift, import the sf-geojson-ios bridging header from the Swift project's bridging header

    #import "sf-geojson-ios-Bridging-Header.h"

### Remote Dependencies ###

* [Simple Features](https://github.com/ngageoint/simple-features-ios) (The MIT License (MIT)) - Simple Features Lib
