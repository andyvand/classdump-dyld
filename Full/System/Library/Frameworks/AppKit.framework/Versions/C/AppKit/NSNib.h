/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@class NSData, NSArray, NSBundle, NSString;

@interface NSNib : NSObject <NSCoding> {

	NSData* _data;
	NSArray* _images;
	NSArray* _sounds;
	NSBundle* _bundle;
	struct {
		unsigned _isKeyed : 1;
		unsigned _inheritsDecodeTimeBundle : 1;
		unsigned _inheritsDecodeTimePath : 1;
		unsigned _reserved : 29;
	}  _flags;
	NSString* _path;
	id reserved2;

}
+(id)_NSNibShortcutNameForUIItemIdentifier:(id)arg1 ;
+(id)_NSNibObjectIDForUIItemIdentifier:(id)arg1 ;
+(char)getNibName:(id*)arg1 objectID:(id*)arg2 forUserInterfaceItem:(id)arg3 ;
+(id)_NSNibBindingDeprecationStringForUIItem:(id)arg1 ;
+(id)_NSNibBindingHelpStringForUIItem:(id)arg1 binding:(id)arg2 ;
+(id)_NSNibRegisterNIBPath:(id)arg1 ;
+(id)_NSNibPathForNibID:(id)arg1 ;
+(id)_NSNibPathForUIItemIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(char)_instantiateWithOwner:(id)arg1 options:(id)arg2 topLevelObjects:(id*)arg3 ;
-(id)initWithNibNamed:(id)arg1 bundle:(id)arg2 ;
-(char)instantiateNibWithOwner:(id)arg1 topLevelObjects:(id*)arg2 ;
-(id)_initWithPath:(id)arg1 bundle:(id)arg2 ;
-(void)_loadNibDataFromPath:(id)arg1 ;
-(char)_instantiateNibWithExternalNameTable:(id)arg1 options:(id)arg2 ;
-(id)initWithKeyedObjectsDataSettingBundleAtDecodeTime:(id)arg1 ;
-(id)initWithNibData:(id)arg1 bundle:(id)arg2 ;
-(char)instantiateNibWithExternalNameTable:(id)arg1 ;
-(char)instantiateWithOwner:(id)arg1 topLevelObjects:(id*)arg2 ;
-(char)inheritsDecodeTimeBundlePath;
-(void)setInheritsDecodeTimeBundlePath:(char)arg1 ;
@end
