/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTCaptureOperationDescriptor.h>

@class NSString;

@interface QTCaptureFileOutputPauseOperationDescriptor : NSObject <QTCaptureOperationDescriptor> {

	char _shouldPause;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationThatShouldPause:(char)arg1 ;
-(char)shouldPause;
-(id)operationDescriptorCoalescedWithExistingOperationDescriptor:(id)arg1 ;
-(id)initOperationThatShouldPause:(char)arg1 ;
-(id)init;
@end

