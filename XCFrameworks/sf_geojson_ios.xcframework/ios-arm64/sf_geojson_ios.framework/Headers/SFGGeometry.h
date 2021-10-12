//
//  SFGGeometry.h
//  sf-geojson-ios
//
//  Created by Brian Osborn on 7/17/19.
//  Copyright © 2019 NGA. All rights reserved.
//

#import "SFGGeoJSONObject.h"
#import <sf_ios/sf_ios.h>
/**
 * Coordinates key
 */
extern NSString * const SFG_COORDINATES;

/**
 * Geometry
 */
@interface SFGGeometry : SFGGeoJSONObject

/**
 *  Initialize
 *
 *  @return new geometry
 */
-(instancetype) init;

/**
 *  Initialize
 *
 *  @param coordinates coordinate positions
 *
 *  @return new geometry
 */
-(instancetype) initWithCoordinates: (NSArray *) coordinates;

/**
 *  Initialize
 *
 *  @param tree JSON tree
 *
 *  @return new geometry
 */
-(instancetype) initWithTree: (NSDictionary *) tree;

/**
 * Get the simple geometry
 *
 * @return simple geometry
 */
-(SFGeometry *) geometry;

/**
 * Get the JSON object coordinates
 *
 * @return coordinates
 */
-(NSArray *) coordinates;

/**
 * Set the coordinates
 *
 * @param coordinates coordinate positions
 */
-(void) setCoordinates: (NSArray *) coordinates;

/**
 * Get the JSON object coordinates from the JSON tree
 *
 * @return coordinates
 */
+(NSArray *) treeCoordinates: (NSDictionary *) tree;

@end
