/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSOpenSavePanelDelegate <NSObject>
@optional
-(char)panel:(id)arg1 shouldEnableURL:(id)arg2;
-(char)panel:(id)arg1 validateURL:(id)arg2 error:(id*)arg3;
-(void)panel:(id)arg1 didChangeToDirectoryURL:(id)arg2;
-(void)panelSelectionDidChange:(id)arg1;
-(id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(char)arg3;
-(void)panel:(id)arg1 willExpand:(char)arg2;

@end

