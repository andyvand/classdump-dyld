/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray;

@interface EWSFolderInfoResponseMessageType : EWSResponseMessageType {

	NSArray* _Folders;

}

@property (nonatomic,copy) NSArray * Folders;              //@synthesize Folders=_Folders - In the implementation block
+(id)definition;
-(void)dealloc;
-(NSArray *)Folders;
-(void)setFolders:(NSArray *)arg1 ;
@end

