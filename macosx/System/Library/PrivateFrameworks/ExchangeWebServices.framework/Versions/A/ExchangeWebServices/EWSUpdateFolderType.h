/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSUpdateFolderType : EWSBaseRequestType {

	NSArray* _FolderChanges;

}

@property (nonatomic,copy) NSArray * FolderChanges;              //@synthesize FolderChanges=_FolderChanges - In the implementation block
+(id)definition;
-(NSArray *)FolderChanges;
-(void)dealloc;
-(void)setFolderChanges:(NSArray *)arg1 ;
@end

