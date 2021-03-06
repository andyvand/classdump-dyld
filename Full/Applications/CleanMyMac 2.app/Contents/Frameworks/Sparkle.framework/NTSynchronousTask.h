/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/Sparkle.framework/Sparkle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTask, NSPipe, NSData;

@interface NTSynchronousTask : NSObject {

	NSTask* mv_task;
	NSPipe* mv_outputPipe;
	NSPipe* mv_inputPipe;
	NSData* mv_output;
	char mv_done;
	int mv_result;

}
+(id)task:(id)arg1 directory:(id)arg2 withArgs:(id)arg3 input:(id)arg4 ;
-(id)outputPipe;
-(id)inputPipe;
-(void)setInputPipe:(id)arg1 ;
-(void)setOutputPipe:(id)arg1 ;
-(void)run:(id)arg1 directory:(id)arg2 withArgs:(id)arg3 input:(id)arg4 ;
-(void)setOutput:(id)arg1 ;
-(id)output;
-(void)setTask:(id)arg1 ;
-(id)task;
-(void)setDone:(char)arg1 ;
-(void)setResult:(int)arg1 ;
-(char)done;
-(int)result;
-(void)taskDidTerminate:(id)arg1 ;
-(void)taskOutputAvailable:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

