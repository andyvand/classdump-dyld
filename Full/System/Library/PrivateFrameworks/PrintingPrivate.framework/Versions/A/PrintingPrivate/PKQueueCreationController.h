/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrintingPrivate/PrintingPrivate-Structs.h>
#import <AppKit/NSWindowController.h>
#import <PrintingPrivate/SUSoftwareUpdateControllerDelegate.h>
#import <PrintingPrivate/PMXPCSupportDelegate.h>

@protocol PKServerQueueCreationDelegate;
@class NSView, PPInstallableOptionsView, NSArrayController, PKBrowser, PKNode, PKDriver, PMXPCSupport, NSString, NSDictionary, NSArray;

@interface PKQueueCreationController : NSWindowController <SUSoftwareUpdateControllerDelegate, PMXPCSupportDelegate> {

	NSView* progressView;
	NSView* optionsView;
	NSView* browserView;
	PPInstallableOptionsView* installableOptionsView;
	NSArrayController* deviceList;
	PKBrowser* browser;
	PKNode* printer;
	PKDriver* driver;
	PMXPCSupport* xpc;
	NSString* name;
	NSString* location;
	NSDictionary* options;
	id<PKServerQueueCreationDelegate> delegate;
	NSString* ppdPath;
	ppd_file_s* ppd;
	NSString* ppdDeviceID;
	NSString* queueID;
	NSString* stateString;
	char canCancel;
	char canConfigure;
	char isCancelled;
	char canContinue;
	char isIndeterminate;
	char driversDownloaded;
	double progressPercentage;
	double progressMinimum;
	double progressMaximum;
	unsigned long long state;
	long long suState;
	NSArray* topLevelNibObjects;

}

@property (retain) PKBrowser * browser; 
@property (retain) PKNode * printer; 
@property (retain) PKDriver * driver; 
@property (retain) PMXPCSupport * xpc; 
@property (retain) NSString * name; 
@property (retain) NSString * location; 
@property (retain) NSDictionary * options; 
@property (assign) id<PKServerQueueCreationDelegate> delegate; 
@property (retain) NSString * ppdPath; 
@property (assign) ppd_file_s* ppd; 
@property (retain) NSString * queueID; 
@property (retain) NSString * ppdDeviceID; 
@property (readonly) NSString * titleString; 
@property (retain) NSString * stateString; 
@property (assign) char driversDownloaded; 
@property (assign) char canCancel; 
@property (assign) char canConfigure; 
@property (assign) char isCancelled; 
@property (assign) char isIndeterminate; 
@property (assign) char canContinue; 
@property (assign) double progressPercentage; 
@property (assign) double progressMinimum; 
@property (assign) double progressMaximum; 
@property (assign) unsigned long long state; 
@property (assign) long long suState; 
@property (retain) NSArray * topLevelNibObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForNode:(id)arg1 use:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(void)setDriver:(PKDriver *)arg1 ;
-(void)setCanConfigure:(char)arg1 ;
-(void)setCanContinue:(char)arg1 ;
-(void)setDriversDownloaded:(char)arg1 ;
-(void)setIsIndeterminate:(char)arg1 ;
-(void)setQueueID:(NSString *)arg1 ;
-(void)setStateString:(NSString *)arg1 ;
-(void)setXpc:(PMXPCSupport *)arg1 ;
-(void)setTopLevelNibObjects:(NSArray *)arg1 ;
-(char)driversDownloaded;
-(void)setPpdDeviceID:(NSString *)arg1 ;
-(void)setPpd:(ppd_file_s*)arg1 ;
-(void)setPpdPath:(NSString *)arg1 ;
-(void)switchPanelTo:(id)arg1 ;
-(void)groupingChanged:(id)arg1 ;
-(void)presentErrorWithMessageText:(id)arg1 buttons:(id)arg2 alertStyle:(unsigned long long)arg3 informativeTextWithFormat:(id)arg4 ;
-(void)stateUpdated:(id)arg1 ;
-(PMXPCSupport *)xpc;
-(PKDriver *)driver;
-(void)notifyQueueCompleted:(long long)arg1 ;
-(NSString *)ppdPath;
-(void)cancelButtonClick:(id)arg1 ;
-(ppd_file_s*)ppd;
-(long long)suState;
-(void)updateDriver:(id)arg1 ;
-(int)verifyFilter:(const char*)arg1 type:(int)arg2 ;
-(char)ppdWarnings:(int*)arg1 errors:(int*)arg2 fatal:(char*)arg3 ;
-(id)printerURIForAutoSetup;
-(char)ppdHasInstallableOptions;
-(int)addPPDBasedPrinter;
-(void)handleEventForCommand:(int)arg1 status:(int)arg2 event:(id)arg3 ;
-(void)printerSelected:(id)arg1 ;
-(void)configureButtonClick:(id)arg1 ;
-(void)configureDone:(id)arg1 ;
-(id)stateIcon;
-(void)setStateIcon:(id)arg1 ;
-(NSString *)queueID;
-(NSString *)ppdDeviceID;
-(char)canConfigure;
-(char)canContinue;
-(void)setProgressPercentage:(double)arg1 ;
-(double)progressMinimum;
-(void)setProgressMinimum:(double)arg1 ;
-(double)progressMaximum;
-(void)setProgressMaximum:(double)arg1 ;
-(void)setSuState:(long long)arg1 ;
-(NSArray *)topLevelNibObjects;
-(char)ppdIsPostscript;
-(const char*)ppdAutoSetupTool;
-(const char*)ppdIconPath;
-(double)progressPercentage;
-(void)setCanCancel:(char)arg1 ;
-(char)canCancel;
-(void)setDelegate:(id<PKServerQueueCreationDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)buttonPressed:(id)arg1 ;
-(id<PKServerQueueCreationDelegate>)delegate;
-(void)setIcon:(id)arg1 ;
-(id)icon;
-(NSDictionary *)options;
-(void)setBrowser:(PKBrowser *)arg1 ;
-(PKBrowser *)browser;
-(void)awakeFromNib;
-(void)filterChanged:(id)arg1 ;
-(char)isCancelled;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)location;
-(PKNode *)printer;
-(void)setPrinter:(PKNode *)arg1 ;
-(char)isIndeterminate;
-(NSString *)titleString;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)stateString;
-(void)setIsCancelled:(char)arg1 ;
@end

