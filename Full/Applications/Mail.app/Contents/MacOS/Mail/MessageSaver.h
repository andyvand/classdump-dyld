/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MCActivityTarget.h>

@class NSView, NSPopUpButton, NSButton, NSArray, NSSet, NSSavePanel, NSWindow, NSURL, NSString;

@interface MessageSaver : NSObject <MCActivityTarget> {

	char _haveAttachments;
	char _hideExtension;
	char _includeAttachments;
	int _saveFormat;
	NSView* _accessoryView;
	NSPopUpButton* _formatPopup;
	NSButton* _includeAttachmentsSwitch;
	NSArray* _messages;
	NSSet* _stores;
	NSSavePanel* _savePanel;
	NSWindow* _window;
	NSURL* _saveDestination;

}

@property (nonatomic,retain) NSView * accessoryView;                                  //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic,__weak) NSPopUpButton * formatPopup;                      //@synthesize formatPopup=_formatPopup - In the implementation block
@property (assign,nonatomic,__weak) NSButton * includeAttachmentsSwitch;              //@synthesize includeAttachmentsSwitch=_includeAttachmentsSwitch - In the implementation block
@property (nonatomic,copy) NSArray * messages;                                        //@synthesize messages=_messages - In the implementation block
@property (nonatomic,copy) NSSet * stores;                                            //@synthesize stores=_stores - In the implementation block
@property (assign,nonatomic,__weak) NSSavePanel * savePanel;                          //@synthesize savePanel=_savePanel - In the implementation block
@property (nonatomic,retain) NSWindow * window;                                       //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSURL * saveDestination;                                 //@synthesize saveDestination=_saveDestination - In the implementation block
@property (assign,nonatomic) char haveAttachments;                                    //@synthesize haveAttachments=_haveAttachments - In the implementation block
@property (assign,nonatomic) char hideExtension;                                      //@synthesize hideExtension=_hideExtension - In the implementation block
@property (assign,nonatomic) char includeAttachments;                                 //@synthesize includeAttachments=_includeAttachments - In the implementation block
@property (assign,nonatomic) int saveFormat;                                          //@synthesize saveFormat=_saveFormat - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)saveMessages:(id)arg1 preferredFormat:(int)arg2 window:(id)arg3 ;
+(void)initialize;
-(void)saveMessagesWithoutPrompting:(id)arg1 toFilePath:(id)arg2 format:(int)arg3 ;
-(void)_setMessages:(id)arg1 ;
-(void)_setSaveFormat:(int)arg1 ;
-(void)setIncludeAttachments:(char)arg1 ;
-(void)setHideExtension:(char)arg1 ;
-(void)setSaveDestination:(NSURL *)arg1 ;
-(void)_saveMessages;
-(void)_runSavePanel;
-(void)setHaveAttachments:(char)arg1 ;
-(char)haveAttachments;
-(void)setStores:(NSSet *)arg1 ;
-(void)setSaveFormat:(int)arg1 ;
-(NSButton *)includeAttachmentsSwitch;
-(int)saveFormat;
-(void)setFormatPopup:(NSPopUpButton *)arg1 ;
-(void)setIncludeAttachmentsSwitch:(NSButton *)arg1 ;
-(void)_savePanelDidEndWithFileHandlingResult:(long long)arg1 ;
-(NSPopUpButton *)formatPopup;
-(void)_updateSavePanelUI;
-(char)includeAttachments;
-(id)_separator;
-(NSURL *)saveDestination;
-(char)hideExtension;
-(void)_handleSaveError:(id)arg1 ;
-(void)_runSavePanelForStationery;
-(void)changeFormat:(id)arg1 ;
-(void)changeIncludeAttachments:(id)arg1 ;
-(NSSet *)stores;
-(void)setMessages:(NSArray *)arg1 ;
-(NSWindow *)window;
-(void)setAccessoryView:(NSView *)arg1 ;
-(NSView *)accessoryView;
-(NSSavePanel *)savePanel;
-(void)setWindow:(NSWindow *)arg1 ;
-(void)setSavePanel:(NSSavePanel *)arg1 ;
-(NSArray *)messages;
@end
