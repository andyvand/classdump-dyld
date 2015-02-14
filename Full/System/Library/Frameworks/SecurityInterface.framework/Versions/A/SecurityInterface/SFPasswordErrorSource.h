/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSImage, NSMutableAttributedString, NSMatrix;

@interface SFPasswordErrorSource : NSObject {

	NSImage* _iconWarning;
	NSImage* _iconError;
	NSMutableAttributedString* _attrString;
	id _controller;
	NSMatrix* _theMatrix;
	int SFPasswordErrorType;

}
-(void)matrixReloaded;
-(id)attrStringForWarning:(id)arg1 type:(int)arg2 font:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(int)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3 ;
@end

