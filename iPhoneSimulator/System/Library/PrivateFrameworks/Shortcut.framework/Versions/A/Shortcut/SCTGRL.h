/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <Shortcut/NSCoding.h>
#import <Shortcut/NSCopying.h>

@class NSMutableArray, NSMutableDictionary;

@interface SCTGRL : NSObject <NSCoding, NSCopying> {

	id mTitleComponent;
	NSMutableArray* mPath;
	NSMutableDictionary* mAttributes;
	SCTGRL* mParent;
	id mResource;
	NSMutableArray* mStateGRLs;
	float mDisplayPriority;

}
-(void)show:(id)arg1 ;
-(id)resource;
-(id)initWithResource:(id)arg1 ;
-(id)localizedCategory;
-(id)representativeIcon;
-(void)resolveWithCallback:(SEL)arg1 target:(id)arg2 ;
-(id)localizedKeys;
-(char)isSearchableAttribute:(id)arg1 ;
-(void)extractSearchableAttributesFromResource:(id)arg1 ;
-(id)initWithResource:(id)arg1 withParent:(id)arg2 ;
-(id)fullTitle;
-(id)titleComponent;
-(void)resolveResourceAndInvoke:(id)arg1 ;
-(Class)resolverClass;
-(id)resolveFromContainer:(id)arg1 ;
-(void)setResource:(id)arg1 ;
-(void)retainResource;
-(void)releaseResource;
-(void)extractAXAttributesFromAXElement:(AXUIElementRef)arg1 ;
-(id)commonAncestorsWith:(id)arg1 ;
-(float)displayPriority;
-(void)enumerateDescendants:(id)arg1 ofResource:(id)arg2 ;
-(void)showState:(id)arg1 ;
-(CGRect)screenRectForResource;
-(id)availableStateGRLs;
-(void)addStateGRL:(id)arg1 ;
-(id)availableStates;
-(id)pathVector;
-(char)isResolved;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setState:(id)arg1 ;
-(id)state;
-(char)allowsKeyedCoding;
-(id)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)title;
-(void)hide:(id)arg1 ;
-(void)perform;
-(id)attributes;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(void)show;
@end

