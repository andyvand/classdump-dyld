/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrintingPrivate/PKNode.h>

@class PKScannerDevice;

@interface PKMFPNode : PKNode {

	PKScannerDevice* scanner;

}

@property (retain) PKScannerDevice * scanner; 
-(id)iconPath;
-(void)setScanner:(PKScannerDevice *)arg1 ;
-(char)sameDevice:(id)arg1 ;
-(id)matchingScannerKey;
-(PKScannerDevice *)scanner;
-(void)dealloc;
-(id)description;
@end

