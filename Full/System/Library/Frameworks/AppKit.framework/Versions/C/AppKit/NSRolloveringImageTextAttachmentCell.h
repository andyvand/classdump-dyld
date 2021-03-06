/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewTextAttachmentCell.h>
#import <AppKit/NSServicesRolloverViewDelegate.h>
#import <AppKit/NSSharingServiceDelegate.h>
#import <AppKit/NSSharingServicePickerDelegate.h>

@class NSLayoutManager, NSTextView, NSSharingServicePicker, NSMenu, NSString;

@interface NSRolloveringImageTextAttachmentCell : NSViewTextAttachmentCell <NSServicesRolloverViewDelegate, NSSharingServiceDelegate, NSSharingServicePickerDelegate> {

	NSLayoutManager* _layoutManager;
	NSTextView* _textView;
	unsigned long long _charIndex;
	NSSharingServicePicker* _picker;

}

@property (readonly) NSMenu * menu; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSMenu *)menu;
-(id)picker;
-(id)pickerForRolloverCalloutView:(id)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(void)adjustView:(id)arg1 frame:(CGRect)arg2 forView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5 ;
-(id)viewWithFrame:(CGRect)arg1 forView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(void)addView:(id)arg1 frame:(CGRect)arg2 toView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5 ;
-(id)itemsForSharingServices:(char)arg1 ;
-(void)sharingService:(id)arg1 didShareItems:(id)arg2 ;
-(CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2 ;
-(id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
-(id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2 ;
-(void)triggerRelayoutOfTextView;
-(id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 mask:(unsigned long long)arg3 proposedSharingServices:(id)arg4 ;
-(char)sharingServicePicker:(id)arg1 shouldShowForView:(id)arg2 ;
-(CGRect)sharingService:(id)arg1 containerFrameOnScreenForShareItem:(id)arg2 ;
@end

