/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding> {

	NSString* _identityInfo;
	NSString* _serviceIdentityInfo;
	NSMutableDictionary* _pcsInfoByZoneID;
	NSMutableArray* _notFoundZoneIDs;

}

@property (nonatomic,retain) NSString * identityInfo;                            //@synthesize identityInfo=_identityInfo - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentityInfo;                     //@synthesize serviceIdentityInfo=_serviceIdentityInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pcsInfoByZoneID;              //@synthesize pcsInfoByZoneID=_pcsInfoByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableArray * notFoundZoneIDs;                   //@synthesize notFoundZoneIDs=_notFoundZoneIDs - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)identityInfo;
-(NSString *)serviceIdentityInfo;
-(NSMutableDictionary *)pcsInfoByZoneID;
-(NSMutableArray *)notFoundZoneIDs;
-(void)setIdentityInfo:(NSString *)arg1 ;
-(void)setServiceIdentityInfo:(NSString *)arg1 ;
-(void)setPcsInfoByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setNotFoundZoneIDs:(NSMutableArray *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

