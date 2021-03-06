/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Print.framework/Versions/A/Plugins/PMProxy.bundle/Contents/MacOS/PMProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPanel, NSTextField;

@interface ResumeOnPageSheetController : NSObject {

	NSPanel* resumeOnPageSheet;
	NSTextField* resumeOnPageNumText;

}

@property (assign) NSPanel * resumeOnPageSheet; 
@property (assign) NSTextField * resumeOnPageNumText; 
@property (readonly) long long resumeOnPage; 
-(void)closeResumeOnPageSheet:(id)arg1 ;
-(void)setResumeOnPageNumText:(NSTextField *)arg1 ;
-(void)setResumeOnPageSheet:(NSPanel *)arg1 ;
-(void)acceptResumeOnPageSheet:(id)arg1 ;
-(void)resumeOnPageForJob:(id)arg1 modalForWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(NSPanel *)resumeOnPageSheet;
-(NSTextField *)resumeOnPageNumText;
-(long long)resumeOnPage;
@end

