/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface EWSPermissionSetType : NSObject {

	NSArray* _Permissions;
	NSArray* _UnknownEntries;

}

@property (nonatomic,copy) NSArray * Permissions;                 //@synthesize Permissions=_Permissions - In the implementation block
@property (nonatomic,copy) NSArray * UnknownEntries;              //@synthesize UnknownEntries=_UnknownEntries - In the implementation block
+(id)definition;
-(NSArray *)UnknownEntries;
-(void)setUnknownEntries:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSArray *)Permissions;
-(void)setPermissions:(NSArray *)arg1 ;
@end

