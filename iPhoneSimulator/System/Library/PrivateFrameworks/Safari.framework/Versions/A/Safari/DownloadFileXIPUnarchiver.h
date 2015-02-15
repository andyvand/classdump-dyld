/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/DownloadFileUnarchiver.h>

@class PKSignedContainer;

@interface DownloadFileXIPUnarchiver : DownloadFileUnarchiver {

	PKSignedContainer* _container;
	id _interruptToken;

}

@property (nonatomic,retain) PKSignedContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) id interruptToken;                          //@synthesize interruptToken=_interruptToken - In the implementation block
-(void)unarchive;
-(char)canInterruptUnarchiving;
-(void)interruptUnarchiving;
-(void)setInterruptToken:(id)arg1 ;
-(id)interruptToken;
-(PKSignedContainer *)container;
-(void)setContainer:(PKSignedContainer *)arg1 ;
@end

