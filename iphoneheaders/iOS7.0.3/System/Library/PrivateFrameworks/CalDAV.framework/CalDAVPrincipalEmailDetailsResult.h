/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet, NSURL;

@interface CalDAVPrincipalEmailDetailsResult : NSObject {

	NSString* _displayName;
	NSSet* _addresses;
	NSURL* _principalURL;

}

@property (retain) NSURL * principalURL;                //@synthesize principalURL=_principalURL - In the implementation block
@property (retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSSet * addresses;                   //@synthesize addresses=_addresses - In the implementation block
+(id)resultFromResponseItem:(id)arg1 ;
-(id)addresses;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(void)setPrincipalURL:(id)arg1 ;
-(id)principalURL;
-(void)setDisplayName:(id)arg1 ;
-(void)setAddresses:(id)arg1 ;
@end
