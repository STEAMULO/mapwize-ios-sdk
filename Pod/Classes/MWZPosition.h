#import <Foundation/Foundation.h>

@interface MWZPosition : NSObject

@property NSNumber* latitude;
@property NSNumber* longitude;
@property NSNumber* floor;
@property NSString* placeId;
@property NSString* venueId;
@property NSString* placeListId;

- (instancetype) initWithPlaceId: (NSString*) placeId;
- (instancetype) initWithVenueId: (NSString*) venueId;
- (instancetype) initWithPlaceListId: (NSString*) placeListId;
- (instancetype) initWithLatitude: (NSNumber*) latitude longitude: (NSNumber*) longitude floor:(NSNumber*) floor;
- (instancetype) initFromDictionnary:(NSDictionary*)dic;
- (NSString*) toStringJSON;

@end
