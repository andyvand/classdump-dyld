/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Archive Utility.app/Contents/Resources/Archives.prefPane/Contents/MacOS/Archives
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Archives/Archives-Structs.h>
#import <PreferencePanes/NSPreferencePane.h>

@class NSPopUpButton, NSButton;

@interface ArchivesPreferencePane : NSPreferencePane {

	CFStringRef _appID;
	NSPopUpButton* _archiveFormat;
	NSPopUpButton* _archiveSaveLocation;
	NSPopUpButton* _archiveMoveFilesLocation;
	NSButton* _archiveReveal;
	NSPopUpButton* _dearchiveSaveLocation;
	NSPopUpButton* _dearchiveMoveArchiveLocation;
	NSButton* _dearchiveReveal;
	NSButton* _dearchiveRecursively;

}
-(void)setupArchiveSaveLocation:(id)arg1 ;
-(void)setupArchiveMoveFilesLocation:(id)arg1 ;
-(void)setupArchiveFormat:(id)arg1 ;
-(void)archiveSaveLocationChanged:(id)arg1 ;
-(void)archiveMoveFilesLocationPanelEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)archiveFormatChanged:(id)arg1 ;
-(void)setupDearchiveSaveLocation:(id)arg1 ;
-(void)archiveSaveLocationPanelEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)dearchiveSaveLocationPanelEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)archiveMoveFilesLocationChanged:(id)arg1 ;
-(void)setupDearchiveMoveArchiveLocation:(id)arg1 ;
-(void)dearchiveMoveArchiveLocationPanelEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)dearchiveMoveArchiveLocationChanged:(id)arg1 ;
-(void)archiveRevealChanged:(id)arg1 ;
-(void)dearchiveRecursivelyChanged:(id)arg1 ;
-(void)dearchiveSaveLocationChanged:(id)arg1 ;
-(void)dearchiveRevealChanged:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(void)mainViewDidLoad;
-(void)didUnselect;
-(void)dealloc;
@end

