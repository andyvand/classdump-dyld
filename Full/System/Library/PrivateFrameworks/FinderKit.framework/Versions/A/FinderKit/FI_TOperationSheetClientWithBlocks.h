/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/TStdAlertSheetClientProtocol.h>

@class NSString;

@interface FI_TOperationSheetClientWithBlocks : NSObject <TStdAlertSheetClientProtocol> {

	/*^block*/id _nextStep;
	/*^block*/id _cancel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientWithNextStep:(/*^block*/id)arg1 cancel:(/*^block*/id)arg2 ;
-(void)stdAlertSheetCancelButtonPressed;
-(void)stdAlertSheetOKButtonPressed;
-(void)dealloc;
@end

