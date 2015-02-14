/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/NSSharingServiceDelegate.h>
#import <WebKit/NSSharingServicePickerDelegate.h>
#import <WebKit/NSMenuDelegate.h>

@class WKView, NSString;

@interface WKActionMenuController : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate, NSMenuDelegate> {

	WebPageProxy* _page;
	WKView* _wkView;
	int _state;
	ActionMenuHitTestResult* _hitTestResult;
	RefPtr<API::Object>* _userData;
	unsigned _type;
	RetainPtr<NSSharingServicePicker>* _sharingServicePicker;
	char _hasActivatedActionContext;
	RetainPtr<DDActionContext>* _currentActionContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForMenu:(id)arg1 withEvent:(id)arg2 ;
-(void)willOpenMenu:(id)arg1 withEvent:(id)arg2 ;
-(void)_clearActionMenuState;
-(void)_updateActionMenuItems;
-(char)isMenuForTextContent;
-(PassRefPtr<WebKit::WebHitTestResult>*)_webHitTestResult;
-(RetainPtr<NSMenuItem>*)_createActionMenuItemForTag:(unsigned)arg1 ;
-(char)_canAddMediaToPhotos;
-(id)_hitTestResultImage;
-(void)_changeSelectionToSuggestion:(id)arg1 ;
-(void)_openURLFromActionMenu:(id)arg1 ;
-(void)_addToReadingListFromActionMenu:(id)arg1 ;
-(void)_copyImage:(id)arg1 ;
-(void)_addImageToPhotos:(id)arg1 ;
-(void)_saveImageToDownloads:(id)arg1 ;
-(void)_copySelection:(id)arg1 ;
-(void)_paste:(id)arg1 ;
-(void)_copyVideoURL:(id)arg1 ;
-(void)_saveVideoToDownloads:(id)arg1 ;
-(id)_defaultMenuItemsForLink;
-(id)_defaultMenuItemsForDataDetectableLink;
-(id)_defaultMenuItemsForVideo;
-(id)_defaultMenuItemsForImage;
-(id)_defaultMenuItemsForDataDetectedText;
-(id)_defaultMenuItemsForEditableTextWithSuggestions;
-(id)_defaultMenuItemsForEditableText;
-(id)_defaultMenuItemsForText;
-(id)_defaultMenuItemsForWhitespaceInEditableArea;
-(id)_defaultMenuItems;
-(id)initWithPage:(WebPageProxy*)arg1 view:(id)arg2 ;
-(void)willDestroyView:(id)arg1 ;
-(void)wkView:(id)arg1 willHandleMouseDown:(id)arg2 ;
-(void)didCloseMenu:(id)arg1 withEvent:(id)arg2 ;
-(void)didPerformActionMenuHitTest:(const ActionMenuHitTestResult*)arg1 userData:(Object*)arg2 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
-(id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2 ;
-(id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 mask:(unsigned long long)arg3 proposedSharingServices:(id)arg4 ;
@end

