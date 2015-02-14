/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSCopying.h>

@class NSUUID, NSURL, NSDate, NSDictionary;

@interface WBSCloudTabCloseRequest : NSObject <NSCopying> {

	NSUUID* _requestUUID;
	NSUUID* _sourceDeviceUUID;
	NSUUID* _destinationDeviceUUID;
	NSUUID* _tabUUID;
	NSURL* _url;
	NSDate* _lastModified;

}

@property (nonatomic,readonly) NSUUID * requestUUID;                                 //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * sourceDeviceUUID;                            //@synthesize sourceDeviceUUID=_sourceDeviceUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * destinationDeviceUUID;                       //@synthesize destinationDeviceUUID=_destinationDeviceUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * tabUUID;                                     //@synthesize tabUUID=_tabUUID - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDate * lastModified;                                //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)_dictionaryWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5 ;
+(char)isCloudTabCloseRequestDictionary:(id)arg1 ;
+(id)destinationDeviceUUIDInDictionary:(id)arg1 ;
-(NSUUID *)tabUUID;
-(NSDate *)lastModified;
-(id)initWithDictionary:(id)arg1 requestUUID:(id)arg2 ;
-(id)initWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5 requestUUID:(id)arg6 ;
-(char)matchesCloudTab:(id)arg1 ;
-(NSUUID *)requestUUID;
-(NSUUID *)sourceDeviceUUID;
-(NSUUID *)destinationDeviceUUID;
-(id)description;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
@end

