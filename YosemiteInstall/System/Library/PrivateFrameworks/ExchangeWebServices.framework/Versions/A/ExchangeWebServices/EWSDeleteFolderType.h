/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSDeleteFolderType : EWSBaseRequestType {

	NSArray* _FolderIds;
	int _DeleteType;

}

@property (nonatomic,copy) NSArray * FolderIds;              //@synthesize FolderIds=_FolderIds - In the implementation block
@property (assign,nonatomic) int DeleteType;                 //@synthesize DeleteType=_DeleteType - In the implementation block
+(id)definition;
-(NSArray *)FolderIds;
-(int)DeleteType;
-(void)dealloc;
-(void)setFolderIds:(NSArray *)arg1 ;
-(void)setDeleteType:(int)arg1 ;
@end

