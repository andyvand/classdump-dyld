/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOTileRequesterDelegate;
#import <GeoServices/GeoServices-Structs.h>
@class GEOResourceManifestConfiguration, NSLocale, GEOTileKeyList, GEOTileKeyMap, NSThread, NSString, NSData;

@interface GEOTileRequester : NSObject {

	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	GEOTileKeyList* _keyList;
	GEOTileKeyMap* _cachedEtags;
	GEOTileKeyMap* _cachedData;
	id<GEOTileRequesterDelegate> _delegate;
	id _context;
	NSThread* _thread;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSData* _auditToken;
	char _requireWiFi;

}

@property (nonatomic,readonly) GEOTileKeyList * keyList;                         //@synthesize keyList=_keyList - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * cachedEtags;                      //@synthesize cachedEtags=_cachedEtags - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * cachedData;                       //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,retain) id<GEOTileRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSThread * thread;                                  //@synthesize thread=_thread - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                           //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) char requireWiFi;                                   //@synthesize requireWiFi=_requireWiFi - In the implementation block
+(unsigned char)tileProviderIdentifier;
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE51*)newExpiringTilesets;
+(char)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(GEOTileKeyList *)keyList;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(GEOTileKeyMap *)cachedData;
-(NSData *)auditToken;
-(id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 ;
-(void)setRequireWiFi:(char)arg1 ;
-(void)setAuditToken:(NSData *)arg1 ;
-(char)requireWiFi;
-(GEOTileKeyMap *)cachedEtags;
-(NSThread *)thread;
-(void)setThread:(NSThread *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setDelegate:(id<GEOTileRequesterDelegate>)arg1 ;
-(void)dealloc;
-(void)start;
-(id)context;
-(void)cancel;
-(id<GEOTileRequesterDelegate>)delegate;
-(NSString *)bundleIdentifier;
-(void)setContext:(id)arg1 ;
@end

