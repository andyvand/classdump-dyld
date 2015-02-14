/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSToolbar;

@interface _NSToolbarItemPlaceholder : NSObject {

	NSString* _itemIdentifier;
	NSToolbar* _tb;
	long long _visibilityPriority;
	char _hasCustomVisibilityPriority;
	id _propertyListRepresentation;

}

@property (nonatomic,retain) id propertyListRepresentation;              //@synthesize propertyListRepresentation=_propertyListRepresentation - In the implementation block
-(void)dealloc;
-(id)toolbar;
-(id)initWithItemIdentifier:(id)arg1 ;
-(id)itemIdentifier;
-(void)_setToolbar:(id)arg1 ;
-(void)setVisibilityPriority:(long long)arg1 ;
-(long long)visibilityPriority;
-(char)_hasCustomVisibilityPriority;
-(id)propertyListRepresentation;
-(void)setPropertyListRepresentation:(id)arg1 ;
@end

