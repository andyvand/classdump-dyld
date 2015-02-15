/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSArray, NSString;

@interface NSSpeechRecognizer : NSObject {

	id _privateNSSpeechRecognizerVars;

}

@property (assign) id<NSSpeechRecognizerDelegate> delegate; 
@property (copy) NSArray * commands; 
@property (copy) NSString * displayedCommandsTitle; 
@property (assign) char listensInForegroundOnly; 
@property (assign) char blocksOtherRecognizers; 
-(id)init;
-(void)setDelegate:(id<NSSpeechRecognizerDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id<NSSpeechRecognizerDelegate>)delegate;
-(void)stopListening;
-(void)_processRecognitionResult:(RXLanguageObjectRef)arg1 ;
-(void)_updateCommandDisplayWithRecognizer;
-(void)startListening;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)displayedCommandsTitle;
-(void)setDisplayedCommandsTitle:(NSString *)arg1 ;
-(char)listensInForegroundOnly;
-(void)setListensInForegroundOnly:(char)arg1 ;
-(char)blocksOtherRecognizers;
-(void)setBlocksOtherRecognizers:(char)arg1 ;
@end

