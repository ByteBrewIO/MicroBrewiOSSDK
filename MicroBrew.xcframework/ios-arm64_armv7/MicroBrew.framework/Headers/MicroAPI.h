//
//  MicroAPI.h
//  MicroBrew
//
//  Created by Cameron Hozouri on 8/29/21.
//

#ifndef MicroAPI_h
#define MicroAPI_h

typedef void (^StateChangedBlock)(BOOL initialized);

@interface MicroAPI : NSObject
@property (nonatomic, strong) NSString* authToken;
@property (nonatomic, copy) StateChangedBlock authStateChanged;

+(void)InitWithAPIKeyAndEmail: (NSString*)apiKey Email:(NSString*)email;
+(void)InitWithAPIKeyAndEmail: (NSString*)apiKey Email:(NSString*)email DefaultCountry:(NSString*)defaultCountry;
+(NSString*)MicroAPIVersion;
+(void)InitializationStateChanged:(StateChangedBlock) authStateChanged;
+(void)GetAppInfoWithAppID: (NSString*)appID completionBlock:(void(^)(NSMutableDictionary *data)) completionBlock;
+(void)GetAppInfoWithAppID: (NSString*)appID Country:(NSString*)country completionBlock:(void(^)(NSMutableDictionary *data)) completionBlock;
+(void)GetAppInfoWithBundleID:(NSString *)bundleID completionBlock:(void(^)(NSMutableDictionary *data)) completionBlock;
+(void)GetAppInfoWithBundleID:(NSString *)bundleID Platform:(NSString*)platform completionBlock:(void(^)(NSMutableDictionary *data)) completionBlock;
+(void)GetAppInfoWithBundleID:(NSString *)bundleID Platform:(NSString*)platform CountryCode:(NSString*)countryCode completionBlock:(void(^)(NSMutableDictionary *data)) completionBlock;

@end

#endif /* MicroAPI_h */
