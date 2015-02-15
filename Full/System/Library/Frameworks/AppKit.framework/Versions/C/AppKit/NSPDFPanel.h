/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSViewController, NSString;

@interface NSPDFPanel : NSObject {

	NSViewController* _accessoryController;
	long long _options;
	NSString* _defaultFileName;
	id _panel;
	id _private;

}

@property (retain) NSViewController * accessoryController;              //@synthesize accessoryController=_accessoryController - In the implementation block
@property (assign) long long options;                                   //@synthesize options=_options - In the implementation block
@property (copy) NSString * defaultFileName;                            //@synthesize defaultFileName=_defaultFileName - In the implementation block
+(id)panel;
-(void)dealloc;
-(id)_panel;
-(long long)options;
-(id)_printInfo;
-(void)setOptions:(long long)arg1 ;
-(void)_setPrintInfo:(id)arg1 ;
-(void)setAccessoryController:(NSViewController *)arg1 ;
-(void)setDefaultFileName:(NSString *)arg1 ;
-(void)beginSheetWithPDFInfo:(id)arg1 modalForWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)_okButtonDisabled;
-(NSViewController *)accessoryController;
-(void)_setPanel:(id)arg1 ;
-(NSString *)defaultFileName;
-(void)_setOKButtonDisabled:(char)arg1 ;
@end

