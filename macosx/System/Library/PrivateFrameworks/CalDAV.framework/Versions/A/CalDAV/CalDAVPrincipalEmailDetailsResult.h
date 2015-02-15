/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet, NSURL;

@interface CalDAVPrincipalEmailDetailsResult : NSObject {

	NSString* _displayName;
	NSSet* _addresses;
	NSURL* _principalURL;

}

@property (nonatomic,retain) NSURL * principalURL;                //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSSet * addresses;                   //@synthesize addresses=_addresses - In the implementation block
+(id)resultFromResponseItem:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSURL *)principalURL;
-(void)setAddresses:(NSSet *)arg1 ;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSSet *)addresses;
@end
