/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSController.h>

@class NSString, NSArray, NSManagedObjectContext, NSPredicate;

@interface NSObjectController : NSController {

	void* _reserved3;
	id _managedProxy;
	struct {
		unsigned _editable : 1;
		unsigned _automaticallyPreparesContent : 1;
		unsigned _hasLoadedData : 1;
		unsigned _explicitlyCannotAdd : 1;
		unsigned _explicitlyCannotRemove : 1;
		unsigned _isUsingManagedProxy : 1;
		unsigned _hasFetched : 1;
		unsigned _batches : 1;
		unsigned _reservedObjectController : 24;
	}  _objectControllerFlags;
	NSString* _objectClassName;
	Class _objectClass;
	NSArray* _contentObjectArray;
	id _content;
	id _objectHandler;

}

@property (retain) NSManagedObjectContext * managedObjectContext; 
@property (copy) NSString * entityName; 
@property (retain) NSPredicate * fetchPredicate; 
@property (assign) char usesLazyFetching; 
@property (retain) id content; 
@property (readonly) id selection; 
@property (copy,readonly) NSArray * selectedObjects; 
@property (assign) char automaticallyPreparesContent; 
@property (assign) Class objectClass; 
@property (getter=isEditable) char editable; 
@property (readonly) char canAdd; 
@property (readonly) char canRemove; 
+(void)initialize;
+(id)_nonAutomaticObservingKeys;
+(id)_keyValueBindingAccessPoints;
+(id)_modelAndProxyKeys;
+(Class)_defaultObjectClass;
+(id)_defaultObjectClassName;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)description;
-(void)setContent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)_init;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)_dealloc;
-(char)usesLazyFetching;
-(id)_managedProxy;
-(NSArray *)selectedObjects;
-(void)_markHasLoadedData:(char)arg1 ;
-(id)_lazyFetchResultProxyForObjects:(id)arg1 ;
-(void)setUsesLazyFetching:(char)arg1 ;
-(char)_isManagedController;
-(id)content;
-(id)newObject;
-(char)canAdd;
-(void)_executeAdd:(id)arg1 didCommitSuccessfully:(char)arg2 actionSender:(id)arg3 ;
-(char)canRemove;
-(void)_changeEditable:(char)arg1 ;
-(void)_setExplicitlyCannotAdd:(char)arg1 remove:(char)arg2 ;
-(char)_canModifyManagedContent;
-(char)isEditable;
-(char)_explicitlyCannotAdd;
-(char)_explicitlyCannotRemove;
-(void)_notifyOfAnyContentChange;
-(id)_singleValueForKey:(id)arg1 ;
-(id)_singleValueForKeyPath:(id)arg1 ;
-(char)_validateSingleValue:(id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(void)_prepareContentWithNewObject:(id)arg1 ;
-(void)add:(id)arg1 ;
-(void)remove:(id)arg1 ;
-(id)_singleMutableArrayValueForKey:(id)arg1 ;
-(id)_singleMutableArrayValueForKeyPath:(id)arg1 ;
-(void)_setSingleValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setSingleValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ;
-(char)_validateSingleValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)_controllerKeys;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)_reactToMatchingInsertions:(id)arg1 deletions:(id)arg2 refreshed:(id)arg3 ;
-(id)_objectIDsFromManagedObjects:(id)arg1 ;
-(id)defaultFetchRequest;
-(char)_performFetchWithRequest:(id)arg1 merge:(char)arg2 error:(id*)arg3 ;
-(void)setEditable:(char)arg1 ;
-(void)awakeFromNib;
-(void)_notifyEditorStateChanged:(char)arg1 ;
-(id)initWithContent:(id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(char)_isUsingManagedProxy;
-(char)automaticallyPreparesContent;
-(void)prepareContent;
-(NSString *)entityName;
-(id)_objectClassName;
-(void)_notifyManagedContextEditorStateChanged:(char)arg1 ;
-(Class)objectClass;
-(void)fetch:(id)arg1 ;
-(void)_setObjectHandler:(id)arg1 ;
-(void)setAutomaticallyPreparesContent:(char)arg1 ;
-(void)_setObjectClassName:(id)arg1 ;
-(void)setObjectClass:(Class)arg1 ;
-(id)selection;
-(void)setEntityName:(NSString *)arg1 ;
-(void)setFetchPredicate:(NSPredicate *)arg1 ;
-(char)_needsLiveUpdates;
-(NSPredicate *)fetchPredicate;
-(id)_fetchRequestForPerformingFetch;
-(char)fetchWithRequest:(id)arg1 merge:(char)arg2 error:(id*)arg3 ;
-(void)_executeFetch:(id)arg1 didCommitSuccessfully:(char)arg2 actionSender:(id)arg3 ;
-(void)_setUsingManagedProxy:(char)arg1 ;
-(id)_relationshipKeyPathsForPrefetching;
@end

