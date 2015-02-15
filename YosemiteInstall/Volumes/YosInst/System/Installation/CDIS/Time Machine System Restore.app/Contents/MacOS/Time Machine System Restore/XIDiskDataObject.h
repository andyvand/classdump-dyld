/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:08:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Installation/CDIS/Time Machine System Restore.app/Contents/MacOS/Time Machine System Restore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSImage, NSMutableArray;

@interface XIDiskDataObject : NSObject {

	NSString* _diskName;
	NSImage* _diskIcon;
	char _isDamaged;
	id _diskImplementationObject;
	SEL _additionalInformationSelector;
	NSString* _diskAdditionalInformation;
	NSMutableArray* _children;

}
-(char)isDamaged;
-(void)setAdditionalInformationSelector:(SEL)arg1 ;
-(void)refreshPropertyData;
-(id)implementationObject;
-(id)additionalInformation;
-(void)dealloc;
-(id)name;
-(id)icon;
-(id)initWithObject:(id)arg1 ;
-(id)children;
@end
