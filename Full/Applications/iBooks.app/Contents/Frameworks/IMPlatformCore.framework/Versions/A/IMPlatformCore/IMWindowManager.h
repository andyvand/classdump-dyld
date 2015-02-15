/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/Versions/A/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMPlatformCore/IMPlatformCore-Structs.h>
#import <IMPlatformCore/NSWindowDelegate.h>

@class NSMutableArray, NSArray, NSString;

@interface IMWindowManager : NSObject <NSWindowDelegate> {

	NSMutableArray* _windowControllerList;

}

@property (readonly) NSArray * windowControllerList;                //@synthesize windowControllerList=_windowControllerList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(id)displayContentForPlugInInstanceDescriptor:(id)arg1 inWindow:(id)arg2 display:(char)arg3 ;
-(id)displayContentForPlugInInstanceDescriptor:(id)arg1 inWindow:(id)arg2 error:(id*)arg3 display:(char)arg4 ;
-(id)windowListIncludingMinimized:(char)arg1 ;
-(void)observeAssetViewerPlugInInstanceDescriptor:(id)arg1 ;
-(id)_openPlugIn:(id)arg1 fromInstanceDescriptor:(id)arg2 viewerInstanceDescriptor:(id)arg3 error:(id*)arg4 display:(char)arg5 ;
-(void)stopObservingAssetViewerPlugInInstanceDescriptor:(id)arg1 ;
-(void)closeWindowForPlugInInstanceDescriptor:(id)arg1 ;
-(NSArray *)windowControllerList;
-(void)displayContentForPlugInDescriptor:(id)arg1 instanceDescription:(id)arg2 inWindow:(id)arg3 display:(char)arg4 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)windowWillResize:(id)arg1 toSize:(CGSize)arg2 ;
-(void)windowWillClose:(id)arg1 ;
-(char)windowShouldClose:(id)arg1 ;
-(CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(CGRect)arg2 ;
-(id)windowWillReturnUndoManager:(id)arg1 ;
-(CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(CGRect)arg3 ;
-(unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2 ;
-(void)windowWillEnterFullScreen:(id)arg1 ;
-(void)windowDidEnterFullScreen:(id)arg1 ;
-(void)windowWillExitFullScreen:(id)arg1 ;
-(void)windowDidExitFullScreen:(id)arg1 ;
@end
