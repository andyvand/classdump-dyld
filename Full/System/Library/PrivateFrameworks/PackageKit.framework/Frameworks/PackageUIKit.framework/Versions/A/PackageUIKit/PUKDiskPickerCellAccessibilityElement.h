/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Frameworks/PackageUIKit.framework/Versions/A/PackageUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageUIKit/PackageUIKit-Structs.h>
#import <PackageUIKit/PUKDiskPickerAccessibilityElement.h>

@class NSString, NSArray;

@interface PUKDiskPickerCellAccessibilityElement : PUKDiskPickerAccessibilityElement {

	id _disk;
	NSString* _role;
	NSArray* _related;
	NSArray* _attributes;

}
+(id)elementWithParent:(id)arg1 view:(id)arg2 disk:(id)arg3 role:(id)arg4 ;
-(CGRect)elementFrame;
-(id)elementRole;
-(id)initWithParent:(id)arg1 view:(id)arg2 disk:(id)arg3 role:(id)arg4 ;
-(id)preparedCell;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
@end

