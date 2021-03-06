/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISDDataObject.h>
#import <SyncServices/NSCoding.h>

@class NSString, ISDFileReference, NSArray;

@interface ISDSchema : ISDDataObject <NSCoding> {

	NSString* _name;
	ISDFileReference* _bundleRef;
	ISDFileReference* _descriptionFile;
	NSArray* _dataClasses;
	NSArray* _entityComponents;
	NSString* _validatorClassName;
	NSString* _conflictResolverClassName;
	NSString* _uiHelperClassName;

}
+(void)initialize;
-(id)bundle;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(id)dataClasses;
-(id)dataClassWithName:(id)arg1 ;
-(id)descriptionFile;
-(void)setDescriptionFile:(id)arg1 ;
-(id)entityComponentWithExtensionName:(id)arg1 entityName:(id)arg2 ;
-(id)entityComponents;
-(id)bundleRef;
-(char)morphInToObject:(id)arg1 ;
-(void)setDataClasses:(id)arg1 ;
-(void)setEntityComponents:(id)arg1 ;
-(id)uiHelperClassName;
-(id)initWithName:(id)arg1 bundleRef:(id)arg2 ;
-(id)anchorChildren;
-(void)setBundleRef:(id)arg1 ;
-(id)validatorClassName;
-(void)setValidatorClassName:(id)arg1 ;
-(id)conflictResolverClassName;
-(void)setConflictResolverClassName:(id)arg1 ;
-(id)conflictUIHelperClassName;
-(void)setUIHelperClassName:(id)arg1 ;
@end

