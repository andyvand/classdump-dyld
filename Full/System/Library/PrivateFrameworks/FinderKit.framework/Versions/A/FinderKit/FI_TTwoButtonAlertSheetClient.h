/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/TStdAlertSheetClientProtocol.h>

@class NSString;

@interface FI_TTwoButtonAlertSheetClient : NSObject <TStdAlertSheetClientProtocol> {

	function<void (long)>* _callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientWithCallback:(function<void (long)>*)arg1 ;
-(id)initWithCallback:(function<void (long)>*)arg1 ;
-(void)stdAlertSheetCancelButtonPressed;
-(void)stdAlertSheetOKButtonPressed;
@end
