/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPort Utility/AssistantCallbackKeychainResponse.h>
#import <AirPort Utility/SetupUIDelegate.h>
#import <AirPort Utility/AUDocumentDelegate.h>

@protocol AUConfigureSessionDelegate;
@class NSWindow, NSString, NSDictionary, AUSetupController, AUTopologyViewController, AUGenericModalTaskSheetController;

@interface AUConfigureSession : NSObject <AssistantCallbackKeychainResponse, SetupUIDelegate, AUDocumentDelegate> {

	id<AUConfigureSessionDelegate> delegate;
	NSWindow* window;
	NSString* baseAddress;
	NSString* basePassword;
	NSDictionary* info;
	AUSetupController* setupController;
	AUTopologyViewController* topoViewController;
	AUGenericModalTaskSheetController* modalSheet;
	char tooBusyToCancel;
	char _wasUnconfigured;
	char _justJoining;
	char _separateWindow;

}

@property (assign,nonatomic) id<AUConfigureSessionDelegate> delegate; 
@property (assign,nonatomic) char tooBusyToCancel; 
@property (nonatomic,retain) NSString * baseAddress; 
@property (nonatomic,retain) NSString * basePassword; 
@property (nonatomic,retain) NSWindow * window; 
@property (nonatomic,retain) NSDictionary * info; 
@property (nonatomic,retain) AUSetupController * setupController; 
@property (nonatomic,retain) AUTopologyViewController * topoViewController; 
@property (nonatomic,retain) AUGenericModalTaskSheetController * modalSheet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureSession:(id)arg1 withInfo:(id)arg2 ;
-(void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4 ;
-(void)configureUnconfiguredDevice;
-(void)joinUnconfiguredDevice;
-(char)tooBusyToCancel;
-(void)setTopoViewController:(AUTopologyViewController *)arg1 ;
-(AUTopologyViewController *)topoViewController;
-(void)documentWillCloseOrDismiss:(id)arg1 ;
-(id)initWithWindow:(id)arg1 andInfo:(id)arg2 ;
-(id)createSetupController;
-(void)doOpenBaseStation:(char)arg1 remember:(char)arg2 displayAsASheet:(char)arg3 ;
-(void)setBasePassword:(NSString *)arg1 ;
-(void)setBaseAddress:(NSString *)arg1 ;
-(void)setModalSheet:(AUGenericModalTaskSheetController *)arg1 ;
-(AUGenericModalTaskSheetController *)modalSheet;
-(void)modalSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)setTooBusyToCancel:(char)arg1 ;
-(NSString *)basePassword;
-(AUSetupController *)setupController;
-(void)setSetupController:(AUSetupController *)arg1 ;
-(NSDictionary *)info;
-(void)endSession;
-(void)setInfo:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<AUConfigureSessionDelegate>)arg1 ;
-(void)dealloc;
-(NSWindow *)window;
-(id<AUConfigureSessionDelegate>)delegate;
-(void)setWindow:(NSWindow *)arg1 ;
-(NSString *)baseAddress;
@end

