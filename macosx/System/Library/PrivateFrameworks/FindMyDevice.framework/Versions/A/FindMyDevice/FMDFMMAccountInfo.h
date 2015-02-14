/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/Versions/A/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyDevice/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface FMDFMMAccountInfo : NSObject <NSSecureCoding> {

	NSString* _dsid;
	NSString* _username;
	NSString* _fmmAuthToken;
	NSDictionary* _additionalInfo;
	NSString* _fmdServerHost;
	NSString* _fmdServerProtocolScheme;
	NSString* _fmdAPSEnvironment;
	unsigned _uid;

}

@property (nonatomic,retain) NSString * dsid;                                 //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * fmmAuthToken;                         //@synthesize fmmAuthToken=_fmmAuthToken - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalInfo;                   //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (nonatomic,retain) NSString * fmdServerHost;                        //@synthesize fmdServerHost=_fmdServerHost - In the implementation block
@property (nonatomic,retain) NSString * fmdServerProtocolScheme;              //@synthesize fmdServerProtocolScheme=_fmdServerProtocolScheme - In the implementation block
@property (nonatomic,retain) NSString * fmdAPSEnvironment;                    //@synthesize fmdAPSEnvironment=_fmdAPSEnvironment - In the implementation block
@property (assign,nonatomic) unsigned uid;                                    //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) char hasMandatoryInfo; 
+(char)supportsSecureCoding;
-(void)setDsid:(NSString *)arg1 ;
-(void)setFmmAuthToken:(NSString *)arg1 ;
-(void)setFmdServerHost:(NSString *)arg1 ;
-(void)setFmdAPSEnvironment:(NSString *)arg1 ;
-(void)setFmdServerProtocolScheme:(NSString *)arg1 ;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalInfo;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(char)hasMandatoryInfo;
-(NSString *)fmmAuthToken;
-(NSString *)fmdServerHost;
-(NSString *)fmdServerProtocolScheme;
-(NSString *)fmdAPSEnvironment;
-(NSString *)dsid;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)uid;
-(void)setUid:(unsigned)arg1 ;
@end

