/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSFolderChangeDescriptionType.h>

@class EWSFolderType;

@interface EWSAppendToFolderFieldType : EWSFolderChangeDescriptionType {

	EWSFolderType* _Folder;

}

@property (nonatomic,retain) EWSFolderType * Folder;              //@synthesize Folder=_Folder - In the implementation block
+(id)definition;
-(void)dealloc;
-(void)setFolder:(EWSFolderType *)arg1 ;
-(EWSFolderType *)Folder;
@end

