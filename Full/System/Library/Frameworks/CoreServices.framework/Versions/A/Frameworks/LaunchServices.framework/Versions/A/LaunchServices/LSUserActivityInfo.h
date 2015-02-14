/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <LaunchServices/NSCopying.h>
#import <LaunchServices/NSSecureCoding.h>

@class NSUUID, NSDictionary, NSDate, NSString, NSURL, NSData, NSError;

@interface LSUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	unsigned long long _type;
	NSDictionary* _options;
	unsigned long long _changeCount;
	NSDate* _activityDate;
	NSString* _title;
	NSString* _typeIdentifier;
	NSURL* _webpageURL;
	NSData* _streamsData;
	NSData* _activityPayload;
	NSError* _error;

}

@property (copy) NSUUID * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (copy) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (assign) unsigned long long changeCount;              //@synthesize changeCount=_changeCount - In the implementation block
@property (copy) NSDate * activityDate;                         //@synthesize activityDate=_activityDate - In the implementation block
@property (copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (copy) NSString * typeIdentifier;                     //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (copy) NSURL * webpageURL;                            //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSData * streamsData;                          //@synthesize streamsData=_streamsData - In the implementation block
@property (copy) NSData * activityPayload;                      //@synthesize activityPayload=_activityPayload - In the implementation block
@property (copy) NSError * error;                               //@synthesize error=_error - In the implementation block
+(char)supportsSecureCoding;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(NSData *)activityPayload;
-(void)setActivityPayload:(NSData *)arg1 ;
-(NSDate *)activityDate;
-(id)logString;
-(void)setChangeCount:(unsigned long long)arg1 ;
-(void)setActivityDate:(NSDate *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(unsigned long long)type;
-(NSDictionary *)options;
-(void)setType:(unsigned long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)changeCount;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)typeIdentifier;
-(id)statusString;
@end

