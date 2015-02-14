+[SCTSearchManager initShortCut]
-[SCTSearchManager init]
-[SCTSearchManager installCarbonEventHandler]
_shortcutBeginTrackingEventHandler
-[SCTSearchManager installShortcutMenuHandlers:]
-[SCTSearchManager installShortcutView]
-[SCTSearchManager loadNib]
-[SCTSearchManager awakeFromNib]
-[SCTSearchManager setupSearchView]
-[SCTSearchManager setupEditFieldKeyBindings]
-[SCTMenuView setVerticalSeparatorOffset:]
-[SCTSearchManager numberOfRowsInTableView:]
-[SCTSearchManager hasNoResults]
-[SCTSearchManager searchResultCount]
-[SCTSearchManager updateSearchView]
-[SCTMenuView setShouldDrawVerticalSeparator:]
-[SCTSearchManager updateGRLIndex]
-[SCTGRLIndex init]
-[SCTGRLIndex indexMenuBarDynamically]
-[SCTGRLIndex indexMenuBar:]
+[SCTCarbonMenu closeShowcasedMenu:]
-[SCTGRLIndex indexCarbonMenu:withParentMenu:resultGRLs:isRootMenu:systemHelpMenu:withDepth:]
-[SCTCarbonMenu initWithMenu:item:withParentMenu:]
-[SCTMenuItem initWithMenu:item:]
-[SCTCarbonMenu menuPath]
-[SCTMenuItemGRL initWithCarbonMenu:]
-[SCTGRL initWithResource:]
-[SCTGRL initWithResource:withParent:]
-[SCTGRL extractSearchableAttributesFromResource:]
-[SCTCarbonMenu menuTitlePath]
-[SCTCarbonMenu validateMenuPath]
-[SCTMenuItem validateItem]
-[SCTMenuItem itemIndex]
-[SCTMenuItem menu]
-[NSString(SCTAdditions) SCTFixApplicationMenuString]
-[SCTCarbonMenu leafItem]
-[SCTGRL path]
-[SCTCarbonMenu dealloc]
-[SCTMenuItemGRL title]
+[SCTGRLIndex sharedIndex]
+[SCTSearchManager sharedSearchManager]
-[SCTSearchManager grlIndex]
-[SCTMenuItemGRL titleComponentAtIndex:]
-[SCTGRLIndex localizedString:]
-[SCTMenuItemGRL isValidTitleString:forIndex:]
-[SCTMenuItemGRL dealloc]
-[SCTGRL dealloc]
-[SCTSearchManager setupSearchResults]
-[SCTSearchManager performSearch]
-[SCTSearchManager stopShowcase:]
-[SCTSearchManager stopDelayedShowcase]
+[SCTAnimationController controller]
-[SCTAnimationController hide]
-[SCTAnimationController inShowcaseMode]
-[SCTSearchManager resetSearchResults]
-[SCTSearchManager makeSearchFieldKey]
-[SCTSearchManager shouldTakeFocus]
-[SCTSearchManager helpMenuOpening]
-[SCTSearchManager stopClearSearchTimer]
-[SCTSearchManager updateSearchViewWithWidth:]
_SCTHandleHelpMenuInitializationEvents
_SCTHelpMenuContentEventHandler
-[SCTSearchManager selectRowAfterTargetingItem:withMenu:]
-[SCTSearchManager setSelectedResult:]
-[SCTMenuView viewDidMoveToWindow]
-[SCTMenuView drawRect:]
-[SCTBackgroundView drawRect:]
-[SCTSearchManager handleWindowDidBecomeKey:]
-[SCTMenuView mouseMoved:]
-[SCTSearchManager resultsTable]
-[SCTSearchManager selectResult:]
-[SCTSearchManager controlTextDidChange:]
-[SCTGRLIndex findGRLsContainingString:limitResultsTo:]
-[SCTGRLIndex grls]
-[SCTSearchManager searchHandlers]
-[SCTGRLIndex handleHelpQuery:]
-[SCTMenuItemGRL fullTitle]
-[SCTSearchManager defaultHelpSearchEnabled]
+[SCTGRLIndex pruneGRLs:toLimit:results:]
+[SCTGRLIndex processGRLs:currentGRL:withTitle:withCurrentPriority:pruneList:]
-[SCTGRL displayPriority]
-[NSArray(SCTAdditions) SCTArrayByApplyingFunction:context:]
-[SCTResults setIdentifier:]
-[SCTResults setSequenceNumber:]
-[SCTResults setValues:]
-[SCTSearchManager processSearchResults:]
-[SCTResults sequenceNumber]
-[SCTResults identifier]
-[SCTSearchManager collateSearchResults]
-[SCTResults values]
-[SCTMenuItemGRL localizedCategory]
-[SCTSearchManager tableView:heightOfRow:]
-[SCTSearchManager convertIndex:toResults:andOffset:]
-[SCTSearchManager searchTypeLabelAtIndex:]
-[SCTSearchManager searchResultAtIndex:]
-[SCTMenuItemGRL representativeIcon]
+[NSImage(SCTAdditions) SCTImageNamed:]
-[SCTResults dealloc]
-[SCTGRLIndex helpQueryDidFinishSearching:]
-[SCTSearchField textView:doCommandBySelector:]
-[SCTSearchManager control:textView:doCommandBySelector:]
-[SCTSearchManager selectDown]
-[NSObject(SCTAdditions) SCTPerformDelayedSelector:withObject:afterDelay:]
-[SCTSearchManager showcaseSelectedResult:]
-[SCTSearchManager selectedGRL]
-[SCTSearchManager shouldShopShowcaseForTransitionToGRL:]
-[SCTSearchManager prevShownGRL]
-[SCTGRL resolveWithCallback:target:]
-[SCTInvocation initWithSelector:target:]
-[SCTMenuItemGRL resolveResourceAndInvoke:]
-[SCTMenuItemGRL resolveFromContainer:]
-[SCTGRL setResource:]
-[SCTInvocation perform:]
-[NSObject(SCTAdditions) SCTPerformDelayedSelector:withObject:]
-[NSObject(SCTAdditions) SCTPerformDelayedSelector:]
-[SCTSearchManager setPrevShownGRL:]
-[SCTSearchManager doShowResource:]
-[SCTMenuItemGRL show]
-[SCTCarbonMenu show]
+[SCTCarbonMenu showcaseMenu:andShiftFocus:]
-[SCTCarbonMenu openMenuFromDepth:shiftFocus:]
-[SCTMenuItemGRL showcaseMenuItem:itemIndex:]
-[SCTMenuItemGRL itemBoundsInScreenCoordinatesForItem:itemIndex:]
-[SCTAnimationController showcaseRect:window:position:]
-[SCTAnimationController showcaseRect:position:]
-[SCTAnimationController setupShowcaseWindow]
-[SCTShowcaseWindow init]
-[SCTHelpPointerView initWithFrame:]
-[SCTPopAnimation initWithView:]
-[SCTInfiniteAnimation initWithObject:]
-[SCTHelpPointerView isOpaque]
-[SCTHelpPointerView wantsDefaultClipping]
-[SCTHelpPointerView drawRect:]
-[SCTPopAnimation setCurrentProgress:]
-[SCTHelpPointerView updateScale:]
-[SCTPopAnimation startAnimation]
-[SCTHelpPointerView updateProgress:]
-[SCTSearchManager shortcutIsVisible]
-[SCTInvocation dealloc]
-[SCTAnimationController animationDidEnd:]
-[SCTInfiniteAnimation startAnimation]
-[SCTInfiniteAnimation setCurrentProgress:]
-[SCTSearchManager setIgnoreMenuClosedEvents:]
-[SCTCarbonMenu closeMenuToIntersectionWithNewMenu:]
-[SCTMenuItem isVisible]
-[SCTSearchManager selectUp]
-[SCTSearchManager handleMenuClosed:]
-[SCTMenuItemGRL hide:]
-[SCTCarbonMenu hide:]
-[SCTGRL hide:]
-[SCTGRL parent]
-[SCTGRLIndex helpQuery:didReturnResults:]
-[SCTHelpItemGRL initWithSearchResult:withQuery:]
-[NSObject(SCTAdditions) SCTUserInterfaceItemIdentifier]
-[SCTHelpItemGRL localizedCategory]
-[SCTHelpItemGRL initWithCategory:]
-[SCTHelpItemGRL isShowAllItem]
-[SCTGRL title]
-[SCTHelpItemGRL fullTitle]
-[SCTHelpItemGRL representativeIcon]
-[SCTGRL resolveResourceAndInvoke:]
-[SCTGRL resolveFromContainer:]
-[SCTHelpItemGRL show]
-[SCTSearchManager selectSearchResult:]
-[SCTSearchManager hideSearchWindow]
-[SCTSearchManager helpMenuClosed]
-[SCTSearchManager startClearSearchTimer]
-[SCTHelpItemGRL dealloc]
-[SCTSearchManager finishAwakeFromNib:]
-[SCTSearchManager doPerformResource:]
-[SCTHelpItemGRL perform]
-[SCTGRL perform]
-[SCTSearchManager tableView:shouldSelectRow:]
-[SCTMenuItemGRL perform]
-[SCTSearchManager selectionInProgress]
-[SCTMenuItemGRL notifyPerform:]
-[SCTSearchManager continueWithMenuVisible]
-[SCTSearchManager searchString]
-[SCTSearchManager isSpaceRow:]
-[SCTSearchManager clearSelection]
-[SCTSearchManager clearSearch]
-[SCTSearchManager timerClearSearch:]
-[SCTSearchManager searchTerm]
-[SCTSearchManager dealloc]
-[SCTSearchManager doSendAppleEventOfKind:]
-[SCTSearchManager sendAppleEventSetup:]
-[SCTSearchManager sendAppleEventCompleted]
-[SCTSearchManager applicationWillTerminate:]
___36-[SCTSearchManager updateSearchView]_block_invoke
-[SCTSearchManager searchFrameInScreenCoordinates]
-[SCTSearchManager toggleSearchMenu:]
-[SCTSearchManager setLastNavigationDirection:]
-[SCTSearchManager keyDown:]
-[SCTSearchManager mouseDown:]
-[SCTSearchManager searchIsInProgress]
___38-[SCTSearchManager searchIsInProgress]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SCTSearchManager tableView:viewForTableColumn:row:]
-[SCTSearchManager tableView:selectionIndexesForProposedSelection:]
-[SCTSearchManager tableView:rowViewForRow:]
-[SCTSearchManager tableViewSelectionDidChange:]
___48-[SCTSearchManager tableViewSelectionDidChange:]_block_invoke
___copy_helper_block_395
___destroy_helper_block_396
-[SCTSearchManager control:textView:completions:forPartialWordRange:indexOfSelectedItem:]
-[SCTSearchManager analyzeAndIndexApp:]
-[SCTSearchManager handleKeyEventWhileInOtherUI:]
-[SCTSearchManager analyzeAndIndexAppDidComplete:]
-[SCTSearchManager registerSearchHandler:]
-[SCTSearchManager unregisterSearchHandler:]
-[SCTSearchManager restoreKeyboardFocus:]
-[SCTSearchManager toggleInspectorWindow]
-[SCTSearchManager setDebugMode:]
-[SCTSearchManager debugMode]
-[SCTSearchManager showAllResultsHandler]
-[SCTSearchManager localizedHelpTopicsName]
-[SCTSearchManager localizedTitlesForShowAllHelpTopics]
-[SCTSearchManager mMenuBarVisibilityManager]
-[SCTSearchManager(Cleanup) cleanupNotifications]
-[SCTSearchManager(Cleanup) cleanupAppNotifications:]
-[SCTMenuView allowsVibrancy]
-[SCTMenuView mouseDragged:]
-[SCTMenuView shouldDrawVerticalSeparator]
-[SCTMenuView verticalSeparatorOffset]
-[NSObject(SCTAdditions) SCTPerformSelector:withObjectsFromArray:]
-[NSObject(SCTAdditions) SCTExtractTitle]
-[NSWindow(SCTAdditions) SCTConvertBaseToScreenRect:]
-[NSWindow(SCTAdditions) SCTWindowIdentifier]
-[NSView(SCTAdditions) SCTConvertToScreenRect:]
-[NSView(SCTAdditions) SCTViewIdentifier]
-[NSView(SCTAdditions) SCTSubViewWithSCTID:]
-[NSArray(SCTAdditions) SCTIndexOfObject:containingValue:withAccessor:]
-[NSArray(SCTAdditions) SCTArrayByOrderedIntersectionWithArray:]
-[NSMenuItem(SCHelpMenu) _isHelpMenu]
-[SCTGRL extractAXAttributesFromAXElement:]
-[SCTGRL isSearchableAttribute:]
-[SCTGRL localizedKeys]
-[SCTGRL copyWithZone:]
-[SCTGRL allowsKeyedCoding]
-[SCTGRL encodeWithCoder:]
-[SCTGRL initWithCoder:]
-[SCTGRL description]
-[SCTGRL isEqual:]
-[SCTGRL setParent:]
-[SCTGRL commonAncestorsWith:]
-[SCTGRL hash]
-[SCTGRL key]
-[SCTGRL fullTitle]
-[SCTGRL titleComponent]
-[SCTGRL localizedCategory]
-[SCTGRL attributes]
-[SCTGRL representativeIcon]
-[SCTGRL isResolved]
-[SCTGRL resource]
-[SCTGRL enumerateDescendants:ofResource:]
-[SCTGRL show:]
-[SCTGRL show]
-[SCTGRL showState:]
-[SCTGRL retainResource]
-[SCTGRL releaseResource]
-[SCTGRL screenRectForResource]
-[SCTGRL availableStateGRLs]
-[SCTGRL addStateGRL:]
-[SCTGRL availableStates]
-[SCTGRL state]
-[SCTGRL setState:]
-[SCTGRL resolverClass]
-[SCTGRL pathVector]
-[SCTViewGRL initWithView:withParent:]
-[SCTViewGRL dealloc]
+[SCTViewGRL viewGRLWithView:withParent:]
-[SCTViewGRL enumerateDescendants:ofResource:]
-[SCTViewGRL fullTitle]
-[SCTViewGRL representativeIcon]
-[SCTViewGRL screenRectForResource]
-[SCTViewGRL resolveFromContainer:]
-[SCTViewGRL windowHidden:]
-[SCTViewGRL show]
-[SCTViewGRL doPerformSCTViewGRL:]
-[SCTViewGRL perform]
-[SCTWindowGRL initWithWindow:withParent:]
-[SCTWindowGRL dealloc]
-[SCTWindowGRL copyWithZone:]
-[SCTWindowGRL enumerateDescendants:ofResource:]
-[SCTWindowGRL encodeWithCoder:]
-[SCTWindowGRL initWithCoder:]
-[SCTWindowGRL description]
-[SCTWindowGRL noteWindowClosed:]
-[SCTWindowGRL fullTitle]
-[SCTWindowGRL setCachedWindow:]
-[SCTWindowGRL windowHidden:]
-[SCTWindowGRL representativeIcon]
-[SCTWindowGRL windowIdentifiers]
-[SCTWindowGRL setWindowIdentifiers:]
-[SCTWindowGRL containsWindowIdentifier:]
-[SCTWindowGRL addWindowIdentifier:]
-[SCTWindowGRL findMatchingWindowInWindowList]
-[SCTWindowGRL resolveFromContainer:]
-[SCTWindowGRL resolveResourceAndInvoke:]
-[SCTWindowGRL hide:]
-[SCTWindowGRL show]
-[SCTWindowGRL perform]
-[SCTMenuItemGRL screenRectForResource]
-[SCTMenuItemGRL enableMenuFramesBoundsHandler:forMenuRef:]
-[SCTMenuItemGRL disableMenuFrameBoundsHandler:]
-[SCTMenuItemGRL removeMenuGRLEventHandler]
-[SCTMenuItemGRL removeMenuGRLHideEventHandler]
-[SCTResults description]
-[SCTResults handler]
-[SCTResults setHandler:]
-[SCTGRLIndex dealloc]
+[SCTGRLIndex indexFromURL:]
+[SCTGRLIndex indexFromStorage]
-[SCTGRLIndex urlToWriteIndexToStorage]
-[SCTGRLIndex writeIndexToStorage]
-[SCTGRLIndex buildLocalizedStringToKeysTable]
-[SCTGRLIndex readLocalizedSearchData]
-[SCTGRLIndex keysForLocalizedString:]
-[SCTGRLIndex extractStringFromLocalizedStringData:]
-[SCTGRLIndex matchLocalizedString:forKeys:]
-[SCTGRLIndex allowsKeyedCoding]
-[SCTGRLIndex encodeWithCoder:]
-[SCTGRLIndex initWithCoder:]
-[SCTGRLIndex description]
-[SCTGRLIndex grlCount]
-[SCTGRLIndex searchLimit]
-[SCTGRLIndex beginUpdate]
-[SCTGRLIndex endUpdate]
-[SCTGRLIndex isInUpdate]
+[SCTGRLIndex previouslyIndexedWindows]
-[SCTGRLIndex indexExternalApp:]
-[SCTGRLIndex analyzeAndIndexApp]
-[SCTGRLIndex appendGRLs:]
-[SCTGRLIndex copyAndReparentGRLs:forWindow:forNewParent:]
-[SCTGRLIndex removeAllGRLs]
-[SCTGRLIndex addSubIndex:]
-[SCTGRLIndex enumerateSubIndices:]
-[SCTGRLIndex analysisDidFinish:]
___55-[SCTGRLIndex findGRLsContainingString:limitResultsTo:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___55-[SCTGRLIndex findGRLsContainingString:limitResultsTo:]_block_invoke409
___55-[SCTGRLIndex findGRLsContainingString:limitResultsTo:]_block_invoke_2
___55-[SCTGRLIndex findGRLsContainingString:limitResultsTo:]_block_invoke_3
___copy_helper_block_413
___destroy_helper_block_414
___copy_helper_block_425
___destroy_helper_block_426
___copy_helper_block_432
___destroy_helper_block_433
-[SCTGRLIndex cancelPendingSearch]
-[SCTGRLIndex dumpGRLs]
-[SCTInvocation initWithInvocation:]
-[SCTInvocation description]
-[SCTInvocation target]
-[SCTInvocation selector]
-[SCTInvocation setTarget:]
-[SCTInvocation setSelector:]
-[SCTInvocation handleNotification:]
-[SCTGRLResolver initWithGRL:selector:target:]
-[SCTGRLResolver initWithGRL:invocation:]
-[SCTGRLResolver initWithGRL:invocation:withDelay:]
-[SCTGRLResolver dealloc]
-[SCTGRLResolver description]
-[SCTGRLResolver perform:]
+[SCTGRLListAnalyzer setTitleWhitelist:]
+[SCTGRLListAnalyzer shouldAnalyzeGRL:]
+[SCTGRLListAnalyzer activeListAnalyzer]
+[SCTGRLListAnalyzer pushActiveListAnalyzer:]
+[SCTGRLListAnalyzer popActiveListAnalyzer]
-[SCTGRLListAnalyzer currentWindow]
-[SCTGRLListAnalyzer setCurrentWindow:]
-[SCTGRLListAnalyzer initWithGRLs:withTrigger:withIndex:withWindow:withWindowGRL:]
-[SCTGRLListAnalyzer dealloc]
-[SCTGRLListAnalyzer increaseModalCount]
-[SCTGRLListAnalyzer decreaseModalCount]
-[SCTGRLListAnalyzer analyzeGRLsAndNotify:selector:]
-[SCTGRLListAnalyzer removeGRLPerformCallbacks]
-[SCTGRLListAnalyzer installGRLPerformCallbacks]
_SCTListAnanalyzerLaunchedOtherAppHandler
-[SCTGRLListAnalyzer analyzeCurrentGRL:]
-[SCTGRLListAnalyzer currentGRLResolved:]
-[SCTGRLListAnalyzer currentAnalysisGRLDidPerform:]
-[SCTGRLListAnalyzer addViewToViewsAdded:]
-[SCTGRLListAnalyzer analyzeRevealedGRLs:withWindow:withWindowGRL:]
-[SCTGRLListAnalyzer stripReconfiguringGRLs:]
-[SCTGRLListAnalyzer analyzeCurrentGRLReconfiguredWindow]
-[SCTGRLListAnalyzer currentGRLResolvedReconfiguredWindow:]
-[SCTGRLListAnalyzer analyzeReconfiguredWindow:]
-[SCTGRLListAnalyzer analyzeReconfiguredWindowFinished:]
-[SCTGRLListAnalyzer handleReconfiguredWindow]
-[SCTGRLListAnalyzer currentWindowContentFrameDidChange:]
-[SCTGRLListAnalyzer currentAnalysisDidNotCreateNewWindow:]
-[SCTGRLListAnalyzer currentWindowViewHierarchyChanged:]
-[SCTGRLListAnalyzer currentAnalysisDidCreateNewWindow:]
-[SCTGRLListAnalyzer analyzeCurrentWindow:]
-[SCTGRLListAnalyzer analysisDidFinish:]
-[SCTGRLListAnalyzer closeOpenedWindow:]
-[SCTGRLListAnalyzer analyzeNextGRL:]
-[SCTGRLListAnalyzer analyzeNextGRLAfterDelay:]
-[SCTGRLListAnalyzer handleAnalyzeNextGRL:]
-[SCTGRLListAnalyzer kickYourSelfIntoMotion]
-[SCTHelpItemGRL init]
-[SCTApplicatonGRL initWithProcessInfo:withParent:]
-[SCTApplicatonGRL dealloc]
-[SCTApplicatonGRL copyWithZone:]
-[SCTApplicatonGRL encodeWithCoder:]
-[SCTApplicatonGRL initWithCoder:]
-[SCTApplicatonGRL representativeIcon]
-[SCTApplicatonGRL title]
-[SCTButtonGRL representativeIcon]
-[SCTButtonGRL availableStates]
-[SCTButtonGRL state]
-[SCTButtonGRL setState:]
-[SCTTextFieldGRL dealloc]
-[SCTTextFieldGRL copyWithZone:]
-[SCTTextFieldGRL representativeIcon]
-[SCTTextFieldGRL associatedViewFor:]
-[SCTTextFieldGRL show]
-[SCTTextFieldGRL perform]
-[SCTTextFieldGRL retainResource]
-[SCTTextFieldGRL releaseResource]
-[SCTAccessibilityGRL extractElementPath:]
-[SCTAccessibilityGRL initWithElement:withParent:]
-[SCTAccessibilityGRL initWithRootAttribute:]
-[SCTAccessibilityGRL init]
-[SCTAccessibilityGRL dealloc]
-[SCTAccessibilityGRL copyWithZone:]
-[SCTAccessibilityGRL encodeWithCoder:]
-[SCTAccessibilityGRL initWithCoder:]
-[SCTAccessibilityGRL fullTitle]
-[SCTAccessibilityGRL resolveFromContainer:]
-[SCTAccessibilityGRL isWindow]
-[SCTAccessibilityGRL resolveResourceAndInvoke:]
-[SCTAccessibilityGRL enumerateDescendants:ofResource:]
-[SCTAccessibilityGRL delayedShowcase:]
-[SCTAccessibilityGRL doFinishShow]
-[SCTAccessibilityGRL show]
-[SCTAccessibilityGRL perform]
-[SCTAccessibilityGRL hide:]
-[SCTAXChildAccessor extractSearchAttributeAndValueFromChild:]
-[SCTAXChildAccessor computeOccuranceIndexForChild:forParent:]
-[SCTAXChildAccessor initWithParent:child:]
-[SCTAXChildAccessor dealloc]
-[SCTAXChildAccessor encodeWithCoder:]
-[SCTAXChildAccessor initWithCoder:]
-[SCTAXChildAccessor attribute]
-[SCTAXChildAccessor value]
-[SCTAXChildAccessor description]
-[SCTAXChildAccessor resolveFromContainer:]
-[SCTShowcaseWindow setMinimumRequiredSize:]
-[SCTAnimationController dealloc]
-[SCTAnimationController showcaseRect:window:]
-[SCTGRLInspectorController initWithNibName:andGRLIndex:]
-[SCTGRLInspectorController isVisible]
-[SCTGRLInspectorController setVisible:]
-[SCTGRLInspectorController awakeFromNib]
-[SCTGRLInspectorController outlineView:numberOfChildrenOfItem:]
-[SCTGRLInspectorController outlineView:isItemExpandable:]
-[SCTGRLInspectorController outlineView:child:ofItem:]
-[SCTGRLInspectorController findParentOfWindowGRL:]
-[SCTGRLInspectorController outlineView:objectValueForTableColumn:byItem:]
-[SCTGRLInspectorController outlineView:setObjectValue:forTableColumn:byItem:]
-[SCTGRLInspectorController outlineViewSelectionDidChange:]
-[SCTGRLInspectorController doShowResource:]
-[SCTGRLInspectorController dealloc]
-[SCTGRLTree init]
-[SCTGRLTree initRootWithKey:withGRLIndex:]
-[SCTGRLTree initWithKey:]
-[SCTGRLTree addGRLToTree:]
-[SCTGRLTree addGRLsInGRLIndex:]
-[SCTGRLTree childWithKey:]
-[SCTGRLTree newChildWithKey:]
-[SCTGRLTree setKey:]
-[SCTGRLTree setGRL:]
-[SCTGRLTree grl]
-[SCTGRLTree setParent:]
-[SCTGRLTree addChild:]
-[SCTGRLTree key]
-[SCTGRLTree parent]
-[SCTGRLTree children]
-[SCTGRLTree toString]
-[SCTGRLTree dealloc]
-[SCTSegmentedControlGRL fullTitle]
-[SCTSegmentedControlGRL enumerateDescendants:ofResource:]
-[SCTSegmentedControlGRL availableStates]
-[SCTSegmentedControlGRL state]
-[SCTSegmentedControlGRL setState:]
-[SCTSegmentedControlGRL showState:]
-[SCTTabViewGRL fullTitle]
-[SCTTabViewGRL enumerateDescendants:ofResource:]
-[SCTTabViewGRL availableStates]
-[SCTTabViewGRL state]
-[SCTTabViewGRL setState:]
-[SCTTabViewGRL showState:]
-[SCTToolbarGRL initWithResource:withParent:]
-[SCTToolbarGRL fullTitle]
-[SCTToolbarGRL enumerateDescendants:ofResource:]
-[SCTToolbarGRL toolbar]
-[SCTToolbarGRL availableStates]
-[SCTToolbarGRL state]
-[SCTToolbarGRL setState:]
-[SCTToolbarGRL showState:]
-[SCTGUIStateGRL initWithState:withParent:]
-[SCTGUIStateGRL dealloc]
-[SCTGUIStateGRL copyWithZone:]
-[SCTGUIStateGRL encodeWithCoder:]
-[SCTGUIStateGRL initWithCoder:]
-[SCTGUIStateGRL representativeIcon]
-[SCTGUIStateGRL fullTitle]
-[SCTGUIStateGRL screenRectForResource]
-[SCTGUIStateGRL resolveResourceAndInvoke:]
-[SCTGUIStateGRL resolveFromContainer:]
-[SCTGUIStateGRL state]
-[SCTGUIStateGRL setState:]
-[SCTGUIStateGRL show]
-[SCTGUIStateGRL perform]
-[SCTGUIStateGRL resolverClass]
-[SCTMatrixGRL fullTitle]
-[SCTMatrixGRL enumerateDescendants:ofResource:]
-[SCTMatrixGRL availableStates]
-[SCTMatrixGRL state]
-[SCTMatrixGRL setState:]
-[SCTMatrixGRL showState:]
-[SCTPopUpButtonGRL enumerateDescendants:ofResource:]
-[SCTPopUpButtonGRL availableStates]
-[SCTPopUpButtonGRL state]
-[SCTPopUpButtonGRL setState:]
-[SCTHelpRectangleView initWithFrame:]
-[SCTHelpRectangleView isOpaque]
-[SCTHelpRectangleView drawRect:]
-[SCTHelpRectangleView setTargetRect:]
-[SCTHelpPointerView dealloc]
-[SCTHelpPointerView setIsOnRightHandSide:]
-[SCTHelpPointerView animationShouldStart:]
-[SCTReconfiguredWindowGRL notificationKey]
-[SCTReconfiguredWindowGRL copyWithZone:]
-[SCTReconfiguredWindowGRL resolveResourceAndInvoke:]
-[SCTReconfiguredWindowGRL handlePollingForMyWindow:]
-[SCTGUIStateGRLResolver perform:]
-[SCTTableView awakeFromNib]
-[SCTTableView allowsVibrancy]
-[SCTTableRowView allowsVibrancy]
-[SCTTableRowView setEmphasized:]
-[SCTInfiniteAnimation dealloc]
-[SCTPopAnimation dealloc]
-[SCTCustomSearchResultGRL initWithItem:searchHandler:]
-[SCTCustomSearchResultGRL dealloc]
-[SCTCustomSearchResultGRL perform]
-[SCTCustomSearchResultGRL hide:]
-[SCTCustomSearchResultGRL show]
-[SCTCustomSearchResultGRL representativeIcon]
-[SCTCustomSearchResultGRL titlePathToString:]
-[SCTCustomSearchResultGRL fullTitle]
-[SCTCustomSearchResultGRL localizedCategory]
-[SCTCustomSearchResultGRL screenRectForResource]
-[SCTCustomSearchResultGRL searchHandler]
-[SCTCustomSearchResultGRL isShowAllHelpTopicsItem]
-[SCTCustomSearchResultGRL setIsShowAllHelpTopicsItem:]
-[SCTMenuItem description]
-[SCTMenuItem setMenu:]
-[SCTCarbonMenu description]
-[SCTCarbonMenu showAndShiftFocus]
-[SCTBackgroundView allowsVibrancy]
-[SCTMenuBarVisibilityManager initWithDelegate:]
-[SCTMenuBarVisibilityManager dealloc]
-[SCTMenuBarVisibilityManager _load_HIMenuBarRequestVisibility]
-[SCTMenuBarVisibilityManager _showMenuNow]
-[SCTMenuBarVisibilityManager _showMenuFail]
-[SCTMenuBarVisibilityManager _showMenu]
___40-[SCTMenuBarVisibilityManager _showMenu]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SCTMenuBarVisibilityManager makeMenuBarVisible]
-[SCTMenuBarVisibilityManager delegate]
-[SCTMenuBarVisibilityManager setDelegate:]
-[SCTSearchManager installCarbonEventHandler].applicationEventList
-[SCTSearchManager installShortcutMenuHandlers:].kHelpMenuOpenEvents
-[SCTSearchManager installShortcutMenuHandlers:].kHelpMenuInitializationEvents
-[SCTSearchManager installShortcutView].kRootEvents
-[SCTSearchManager installShortcutView].kSystemHelpMenuEvents
-[SCTSearchManager showcaseSelectedResult:].kAppMenuEvents
_SCTHandleHelpMenuInitializationEvents.kContentEvents
-[SCTMenuItemGRL enableMenuFramesBoundsHandler:forMenuRef:].kMenuContentViewEvents
-[SCTMenuItemGRL show].kHelpMenuOpenEvents
-[SCTGRLListAnalyzer installGRLPerformCallbacks].applicationEventList
-[SCTAccessibilityGRL show].kAppEvents
GCC_except_table64
GCC_except_table16
GCC_except_table23
GCC_except_table25
GCC_except_table27
GCC_except_table30
GCC_except_table33
GCC_except_table4
GCC_except_table4
GCC_except_table3
GCC_except_table5
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp353
___block_descriptor_tmp399
___block_descriptor_tmp
___block_descriptor_tmp417
___block_descriptor_tmp429
___block_descriptor_tmp435
_gTimeLogIdNames
___block_descriptor_tmp
_OBJC_IVAR_$_SCTAnimationController.mShowcaseWindow
_OBJC_IVAR_$_SCTAnimationController.mShowcaseView
_OBJC_IVAR_$_SCTAnimationController.mPreviousPosition
_OBJC_IVAR_$_SCTAnimationController.mIsShowcasing
_OBJC_IVAR_$_SCTAnimationController.mPopAnimation
_OBJC_IVAR_$_SCTAnimationController.mHoverAnimation
_OBJC_IVAR_$_SCTAnimationController.mNextAnimationLocation
_OBJC_IVAR_$_SCTAnimationController.mFadeInAnimation
_OBJC_IVAR_$_SCTAnimationController.mPopAnimationPhaseOne
_OBJC_IVAR_$_SCTAnimationController.mPopAnimationPhaseTwo
_OBJC_IVAR_$_SCTAnimationController.mFadeOutAnimation
_OBJC_IVAR_$_SCTHelpRectangleView.mTargetRect
_OBJC_IVAR_$_SCTHelpPointerView.mPreviousRect
_OBJC_IVAR_$_SCTHelpPointerView.mInitialBounds
_OBJC_IVAR_$_SCTHelpPointerView.mIsRightHandSide
_OBJC_IVAR_$_SCTHelpPointerView.mAnimationProgress
_OBJC_IVAR_$_SCTHelpPointerView.mScale
_OBJC_IVAR_$_SCTHelpPointerView.mCurrentMode
_OBJC_IVAR_$_SCTHelpPointerView.mControlTint
_OBJC_IVAR_$_SCTHelpPointerView.mShadow
_OBJC_IVAR_$_SCTHelpPointerView.mRHSPointerImage
_OBJC_IVAR_$_SCTHelpPointerView.mLHSPointerImage
_OBJC_IVAR_$_SCTHelpPointerView.mRHSPointerCIImage
_OBJC_IVAR_$_SCTInfiniteAnimation.mAnimateObject
_OBJC_IVAR_$_SCTInfiniteAnimation.mInternalProgress
_OBJC_IVAR_$_SCTInfiniteAnimation.mTimeStep
_OBJC_IVAR_$_SCTInfiniteAnimation.mDelayedStartTime
_OBJC_IVAR_$_SCTInfiniteAnimation.mStartTimer
_OBJC_IVAR_$_SCTPopAnimation.mAnimatedView
_OBJC_IVAR_$_SCTPopAnimation.mSlope
_OBJC_IVAR_$_SCTPopAnimation.mScale
_OBJC_IVAR_$_SCTPopAnimation.mScaleStep
_SCTSharedInstance
-[SCTSearchManager loadNib].sNIBLoaded
-[SCTSearchManager updateGRLIndex].indexingPerformed
-[SCTViewGRL representativeIcon].sIcon
-[SCTWindowGRL representativeIcon].sIcon
-[SCTMenuItemGRL representativeIcon].sIcon
-[SCTGRLIndex description].sIndentLevel
+[SCTGRLIndex previouslyIndexedWindows].sPreviouslyIndexWindows
-[SCTHelpItemGRL representativeIcon].sIcon
-[SCTApplicatonGRL representativeIcon].sIcon
-[SCTButtonGRL representativeIcon].sIcon
-[SCTTextFieldGRL representativeIcon].sIcon
_getSCTBundle.sSCBundle
_sShortcutHelpMenu
_SCTAppHelpMenu
_sAppHelpMenuWasVisible
_appNeedsEventObserverHack.sInitialized
_appNeedsEventObserverHack.sNeedsEventObserverHack
__sharedInstance
-[SCTHelpPointerView drawRect:].rhsPointerTipImageAqua
-[SCTHelpPointerView drawRect:].rhsPointerEndImageAqua
-[SCTHelpPointerView drawRect:].rhsPointerMiddleImageAqua
-[SCTHelpPointerView drawRect:].rhsPointerTipImageGraphite
-[SCTHelpPointerView drawRect:].rhsPointerEndImageGraphite
-[SCTHelpPointerView drawRect:].rhsPointerMiddleImageGraphite
-[SCTHelpPointerView drawRect:].lhsPointerTipImageAqua
-[SCTHelpPointerView drawRect:].lhsPointerEndImageAqua
-[SCTHelpPointerView drawRect:].lhsPointerMiddleImageAqua
-[SCTHelpPointerView drawRect:].lhsPointerTipImageGraphite
-[SCTHelpPointerView drawRect:].lhsPointerEndImageGraphite
-[SCTHelpPointerView drawRect:].lhsPointerMiddleImageGraphite
_SCTParseSearchStringToSearchTerms.sRegex
___dl_HIToolbox
___dl_fn_HIMenuBarRequestVisibility
_AXGRLMenuEventHandler
_AXUIElementDebugElement
_AXUIElementGetAppElement
_AXUIElementHasParentOfRole
_GetIndexOfMenuInParent
_GetParentAndIndexOfMenu
_InitializeTimeLog
_IsTimeLogOn
_MenuCalculateSizeHandler
_MenuClosedEventHandler
_MenuGRLGetFramesBoundsHandler
_NSStringFromAX
_OBJC_CLASS_$_SCTAXChildAccessor
_OBJC_CLASS_$_SCTAccessibilityGRL
_OBJC_CLASS_$_SCTAnimationController
_OBJC_CLASS_$_SCTApplicatonGRL
_OBJC_CLASS_$_SCTBackgroundView
_OBJC_CLASS_$_SCTButtonGRL
_OBJC_CLASS_$_SCTCarbonMenu
_OBJC_CLASS_$_SCTCustomSearchResultGRL
_OBJC_CLASS_$_SCTGRL
_OBJC_CLASS_$_SCTGRLIndex
_OBJC_CLASS_$_SCTGRLInspectorController
_OBJC_CLASS_$_SCTGRLListAnalyzer
_OBJC_CLASS_$_SCTGRLResolver
_OBJC_CLASS_$_SCTGRLTree
_OBJC_CLASS_$_SCTGUIStateGRL
_OBJC_CLASS_$_SCTGUIStateGRLResolver
_OBJC_CLASS_$_SCTHelpItemGRL
_OBJC_CLASS_$_SCTHelpPointerView
_OBJC_CLASS_$_SCTHelpRectangleView
_OBJC_CLASS_$_SCTInfiniteAnimation
_OBJC_CLASS_$_SCTInvocation
_OBJC_CLASS_$_SCTMatrixGRL
_OBJC_CLASS_$_SCTMenuBarVisibilityManager
_OBJC_CLASS_$_SCTMenuItem
_OBJC_CLASS_$_SCTMenuItemGRL
_OBJC_CLASS_$_SCTMenuView
_OBJC_CLASS_$_SCTPopAnimation
_OBJC_CLASS_$_SCTPopUpButtonGRL
_OBJC_CLASS_$_SCTReconfiguredWindowGRL
_OBJC_CLASS_$_SCTResults
_OBJC_CLASS_$_SCTSearchField
_OBJC_CLASS_$_SCTSearchManager
_OBJC_CLASS_$_SCTSegmentedControlGRL
_OBJC_CLASS_$_SCTShowcaseWindow
_OBJC_CLASS_$_SCTTabViewGRL
_OBJC_CLASS_$_SCTTableRowView
_OBJC_CLASS_$_SCTTableView
_OBJC_CLASS_$_SCTTextFieldGRL
_OBJC_CLASS_$_SCTToolbarGRL
_OBJC_CLASS_$_SCTViewGRL
_OBJC_CLASS_$_SCTWindowGRL
_OBJC_IVAR_$_SCTAXChildAccessor.mAttribute
_OBJC_IVAR_$_SCTAXChildAccessor.mOccurance
_OBJC_IVAR_$_SCTAXChildAccessor.mValue
_OBJC_IVAR_$_SCTAccessibilityGRL.mRole
_OBJC_IVAR_$_SCTAccessibilityGRL.mSubrole
_OBJC_IVAR_$_SCTApplicatonGRL.mAppBundleIdentifier
_OBJC_IVAR_$_SCTApplicatonGRL.mAppName
_OBJC_IVAR_$_SCTCarbonMenu.mMenuPath
_OBJC_IVAR_$_SCTCustomSearchResultGRL.isShowAllHelpTopicsItem
_OBJC_IVAR_$_SCTCustomSearchResultGRL.mHasHideItem
_OBJC_IVAR_$_SCTCustomSearchResultGRL.mHasIconForItem
_OBJC_IVAR_$_SCTCustomSearchResultGRL.mHasLocalizedCategoryForItem
_OBJC_IVAR_$_SCTCustomSearchResultGRL.mHasPerformActionForItem
_OBJC_IVAR_$_SCTCustomSearchResultGRL.mHasShowAllHelpTopicsForSearchString
_OBJC_IVAR_$_SCTCustomSearchResultGRL.mHasShowItem
_OBJC_IVAR_$_SCTCustomSearchResultGRL.mSearchHandler
_OBJC_IVAR_$_SCTCustomSearchResultGRL.mUserInterfaceItem
_OBJC_IVAR_$_SCTGRL.mAttributes
_OBJC_IVAR_$_SCTGRL.mDisplayPriority
_OBJC_IVAR_$_SCTGRL.mParent
_OBJC_IVAR_$_SCTGRL.mPath
_OBJC_IVAR_$_SCTGRL.mResource
_OBJC_IVAR_$_SCTGRL.mStateGRLs
_OBJC_IVAR_$_SCTGRL.mTitleComponent
_OBJC_IVAR_$_SCTGRLIndex.mCustomSearchThreadLock
_OBJC_IVAR_$_SCTGRLIndex.mGRLs
_OBJC_IVAR_$_SCTGRLIndex.mHelpItemResults
_OBJC_IVAR_$_SCTGRLIndex.mKeyToLocalizedStringTable
_OBJC_IVAR_$_SCTGRLIndex.mLocalizedStringToKeysTable
_OBJC_IVAR_$_SCTGRLIndex.mQueryResultsReceived
_OBJC_IVAR_$_SCTGRLIndex.mQuerySequenceNumber
_OBJC_IVAR_$_SCTGRLIndex.mSearchLimit
_OBJC_IVAR_$_SCTGRLIndex.mSearchThreadLock
_OBJC_IVAR_$_SCTGRLIndex.mSubIndices
_OBJC_IVAR_$_SCTGRLIndex.mUpdateLevel
_OBJC_IVAR_$_SCTGRLInspectorController.mGRLIndex
_OBJC_IVAR_$_SCTGRLInspectorController.mGRLTextView
_OBJC_IVAR_$_SCTGRLInspectorController.mGRLToBeShown
_OBJC_IVAR_$_SCTGRLInspectorController.mGRLTree
_OBJC_IVAR_$_SCTGRLInspectorController.mOutlineView
_OBJC_IVAR_$_SCTGRLListAnalyzer.mAnalysisTimer
_OBJC_IVAR_$_SCTGRLListAnalyzer.mCompletionSelector
_OBJC_IVAR_$_SCTGRLListAnalyzer.mCompletionTarget
_OBJC_IVAR_$_SCTGRLListAnalyzer.mCurrentGRL
_OBJC_IVAR_$_SCTGRLListAnalyzer.mCurrentIndex
_OBJC_IVAR_$_SCTGRLListAnalyzer.mCurrentInitialState
_OBJC_IVAR_$_SCTGRLListAnalyzer.mCurrentState
_OBJC_IVAR_$_SCTGRLListAnalyzer.mCurrentStates
_OBJC_IVAR_$_SCTGRLListAnalyzer.mCurrentWindow
_OBJC_IVAR_$_SCTGRLListAnalyzer.mCurrentWindowWasOpened
_OBJC_IVAR_$_SCTGRLListAnalyzer.mFirstTimeWindowSeen
_OBJC_IVAR_$_SCTGRLListAnalyzer.mGRLIndex
_OBJC_IVAR_$_SCTGRLListAnalyzer.mGRLs
_OBJC_IVAR_$_SCTGRLListAnalyzer.mModalCount
_OBJC_IVAR_$_SCTGRLListAnalyzer.mOtherAppLaunchHandler
_OBJC_IVAR_$_SCTGRLListAnalyzer.mReconfiguringGRL
_OBJC_IVAR_$_SCTGRLListAnalyzer.mTargetWindow
_OBJC_IVAR_$_SCTGRLListAnalyzer.mTargetWindowGRL
_OBJC_IVAR_$_SCTGRLListAnalyzer.mTrigger
_OBJC_IVAR_$_SCTGRLListAnalyzer.mViewsAdded
_OBJC_IVAR_$_SCTGRLResolver.mDelay
_OBJC_IVAR_$_SCTGRLResolver.mGRL
_OBJC_IVAR_$_SCTGRLTree.mChildren
_OBJC_IVAR_$_SCTGRLTree.mGRL
_OBJC_IVAR_$_SCTGRLTree.mKey
_OBJC_IVAR_$_SCTGRLTree.mParent
_OBJC_IVAR_$_SCTGUIStateGRL.mState
_OBJC_IVAR_$_SCTHelpItemGRL.mHelpQuery
_OBJC_IVAR_$_SCTHelpItemGRL.mSearchResult
_OBJC_IVAR_$_SCTInvocation.mSelector
_OBJC_IVAR_$_SCTInvocation.mTarget
_OBJC_IVAR_$_SCTMenuBarVisibilityManager.delegate
_OBJC_IVAR_$_SCTMenuItem.mItemIndex
_OBJC_IVAR_$_SCTMenuItem.mMenu
_OBJC_IVAR_$_SCTMenuItemGRL.mCarbonMenu
_OBJC_IVAR_$_SCTMenuItemGRL.mGetFramesBoundsHandler
_OBJC_IVAR_$_SCTMenuItemGRL.mMenuHideEventHandler
_OBJC_IVAR_$_SCTMenuView.shouldDrawVerticalSeparator
_OBJC_IVAR_$_SCTMenuView.verticalSeparatorOffset
_OBJC_IVAR_$_SCTReconfiguredWindowGRL.mTimer
_OBJC_IVAR_$_SCTResults.handler
_OBJC_IVAR_$_SCTResults.identifier
_OBJC_IVAR_$_SCTResults.sequenceNumber
_OBJC_IVAR_$_SCTResults.values
_OBJC_IVAR_$_SCTSearchManager.mBackgroundView
_OBJC_IVAR_$_SCTSearchManager.mCarriageReturnSelector
_OBJC_IVAR_$_SCTSearchManager.mClearSearchTimer
_OBJC_IVAR_$_SCTSearchManager.mCloseMenuHandler
_OBJC_IVAR_$_SCTSearchManager.mCollatedResults
_OBJC_IVAR_$_SCTSearchManager.mCustomQuerySequenceNumber
_OBJC_IVAR_$_SCTSearchManager.mDebugMode
_OBJC_IVAR_$_SCTSearchManager.mEnterSelector
_OBJC_IVAR_$_SCTSearchManager.mGRLIndex
_OBJC_IVAR_$_SCTSearchManager.mGRLToBeShown
_OBJC_IVAR_$_SCTSearchManager.mHasNoResultsFound
_OBJC_IVAR_$_SCTSearchManager.mHelpMenuIsInSearchMode
_OBJC_IVAR_$_SCTSearchManager.mIgnoreMenuClosedEvents
_OBJC_IVAR_$_SCTSearchManager.mInstallWhenTrackingHandlerRef
_OBJC_IVAR_$_SCTSearchManager.mLastNavigationDirection
_OBJC_IVAR_$_SCTSearchManager.mMenuBarIndexIsStale
_OBJC_IVAR_$_SCTSearchManager.mMenuBarVisibilityManager
_OBJC_IVAR_$_SCTSearchManager.mMoveDownSelector
_OBJC_IVAR_$_SCTSearchManager.mMoveLeftSelector
_OBJC_IVAR_$_SCTSearchManager.mMoveRightSelector
_OBJC_IVAR_$_SCTSearchManager.mMoveUpSelector
_OBJC_IVAR_$_SCTSearchManager.mNewLineSelector
_OBJC_IVAR_$_SCTSearchManager.mPrevShownGRL
_OBJC_IVAR_$_SCTSearchManager.mPreviousHelpMenu
_OBJC_IVAR_$_SCTSearchManager.mQuerySequenceNumber
_OBJC_IVAR_$_SCTSearchManager.mRawSearchResults
_OBJC_IVAR_$_SCTSearchManager.mResetSearch
_OBJC_IVAR_$_SCTSearchManager.mResultCategories
_OBJC_IVAR_$_SCTSearchManager.mResultSequenceNumber
_OBJC_IVAR_$_SCTSearchManager.mResultsTable
_OBJC_IVAR_$_SCTSearchManager.mSCTIconView
_OBJC_IVAR_$_SCTSearchManager.mSavedKeyWindow
_OBJC_IVAR_$_SCTSearchManager.mSearchField
_OBJC_IVAR_$_SCTSearchManager.mSearchHandlers
_OBJC_IVAR_$_SCTSearchManager.mSearchString
_OBJC_IVAR_$_SCTSearchManager.mSearchThreadLock
_OBJC_IVAR_$_SCTSearchManager.mSearchTimeInterval
_OBJC_IVAR_$_SCTSearchManager.mSearchTitle
_OBJC_IVAR_$_SCTSearchManager.mSearchView
_OBJC_IVAR_$_SCTSearchManager.mSelectedResult
_OBJC_IVAR_$_SCTSearchManager.mSelectionInProgress
_OBJC_IVAR_$_SCTSearchManager.mShownGRL
_OBJC_IVAR_$_SCTSearchManager.mSpaceGRL
_OBJC_IVAR_$_SCTSearchManager.mStatusItem
_OBJC_IVAR_$_SCTSearchManager.mTerminateSearchThread
_OBJC_IVAR_$_SCTSearchManager.mThreadCount
_OBJC_IVAR_$_SCTSearchManager.mViewRowTable
_OBJC_IVAR_$_SCTShowcaseWindow.mAnimator
_OBJC_IVAR_$_SCTShowcaseWindow.mMinimumRequiredSize
_OBJC_IVAR_$_SCTTextFieldGRL.mAssociatedView
_OBJC_IVAR_$_SCTWindowGRL.mPendingShowcase
_OBJC_IVAR_$_SCTWindowGRL.mWindowIdentifiers
_OBJC_METACLASS_$_SCTAXChildAccessor
_OBJC_METACLASS_$_SCTAccessibilityGRL
_OBJC_METACLASS_$_SCTAnimationController
_OBJC_METACLASS_$_SCTApplicatonGRL
_OBJC_METACLASS_$_SCTBackgroundView
_OBJC_METACLASS_$_SCTButtonGRL
_OBJC_METACLASS_$_SCTCarbonMenu
_OBJC_METACLASS_$_SCTCustomSearchResultGRL
_OBJC_METACLASS_$_SCTGRL
_OBJC_METACLASS_$_SCTGRLIndex
_OBJC_METACLASS_$_SCTGRLInspectorController
_OBJC_METACLASS_$_SCTGRLListAnalyzer
_OBJC_METACLASS_$_SCTGRLResolver
_OBJC_METACLASS_$_SCTGRLTree
_OBJC_METACLASS_$_SCTGUIStateGRL
_OBJC_METACLASS_$_SCTGUIStateGRLResolver
_OBJC_METACLASS_$_SCTHelpItemGRL
_OBJC_METACLASS_$_SCTHelpPointerView
_OBJC_METACLASS_$_SCTHelpRectangleView
_OBJC_METACLASS_$_SCTInfiniteAnimation
_OBJC_METACLASS_$_SCTInvocation
_OBJC_METACLASS_$_SCTMatrixGRL
_OBJC_METACLASS_$_SCTMenuBarVisibilityManager
_OBJC_METACLASS_$_SCTMenuItem
_OBJC_METACLASS_$_SCTMenuItemGRL
_OBJC_METACLASS_$_SCTMenuView
_OBJC_METACLASS_$_SCTPopAnimation
_OBJC_METACLASS_$_SCTPopUpButtonGRL
_OBJC_METACLASS_$_SCTReconfiguredWindowGRL
_OBJC_METACLASS_$_SCTResults
_OBJC_METACLASS_$_SCTSearchField
_OBJC_METACLASS_$_SCTSearchManager
_OBJC_METACLASS_$_SCTSegmentedControlGRL
_OBJC_METACLASS_$_SCTShowcaseWindow
_OBJC_METACLASS_$_SCTTabViewGRL
_OBJC_METACLASS_$_SCTTableRowView
_OBJC_METACLASS_$_SCTTableView
_OBJC_METACLASS_$_SCTTextFieldGRL
_OBJC_METACLASS_$_SCTToolbarGRL
_OBJC_METACLASS_$_SCTViewGRL
_OBJC_METACLASS_$_SCTWindowGRL
_SCTAXMenuEventHandler
_SCTCurrentGRLMenuEventHandler
_SCTDebugLevel
_SCTDefaultHelpBookSearchEnabled
_SCTDescriptionKey
_SCTDumpViewHierarchy
_SCTEscapedStringFromBuffer
_SCTExtractDebugInfoFromPruneListFunction
_SCTExtractGRLsFromPruneListFunction
_SCTGRLIndexDidChangeNotification
_SCTGRLIndexIndexingCompleteNotification
_SCTHelpMenuHandler
_SCTHelpTextkey
_SCTHideHelpPointerForItem
_SCTInitShortcut
_SCTIsDefaultHelpBookSearchEnabled
_SCTKeyEventObserver
_SCTListAnalysisComplete
_SCTListAnalyzerStack
_SCTLocalizedSearchKeys
_SCTLocalizedString
_SCTMenuEventHandler
_SCTMenuGRLMenuEventHandler
_SCTNormalizeLinkedMenuItem
_SCTParseSearchStringToSearchTerms
_SCTPerfTimeLogOn
_SCTRangeInRange
_SCTRegisterSearchHandler
_SCTResourceDidHide
_SCTResourceDidPerform
_SCTResourceDidShow
_SCTSetDefaultHelpBookSearchEnabled
_SCTSharedSGRLInspectorController
_SCTShowHelpPointerForItem
_SCTShowcasedMenu
_SCTSortPruneListByIndexFunction
_SCTSortPruneListByPriorityFunction
_SCTStringValueKey
_SCTTitleIsChild
_SCTTitleKey
_SCTTitleWhitelist
_SCTToggleHelpMenu
_SCTUnregisterSearchHandler
_SCTUserInterfaceItemPerformActionForItem
_SCTUserInterfaceItemRangeOfStringMatching
_SCTUserInterfaceItemSearchItemsInViewHierarchyMatching
_SCTUserInterfaceItemSearchScreenRectForItem
_SCTUserInterfaceItemSearchTitleForItem
_SCTUserInterfaceItemSearchViewForItem
_SCTUserInterfaceItemShowItem
_SCTWindowReconfiguredNotification
_TimeLogPrintDelta
_TimeLogStart
__SCTLog
__SCTLogPopIndent
__SCTLogPushIndent
_appNeedsEventObserverHack
_findExistingHelpMenu
_frameSort
_gCurrentIndentLevel
_getSCTBundle
_getSystemHelpMenu
_hideAppHelpMenu
_rootElement
_showAppHelpMenu
_AECreateAppleEvent
_AECreateDesc
_AESendMessage
_AXObserverRemoveNotification
_AXUIElementCopyAttributeValue
_AXUIElementCreateApplication
_AXUIElementGetPid
_AXUIElementPerformAction
_AXUIElementSetAttributeValue
_AXValueGetValue
_AcquireRootMenu
_CFAbsoluteTimeGetCurrent
_CFArrayGetCount
_CFArrayGetValueAtIndex
_CFEqual
_CFRelease
_CFRetain
_CFRunLoopAddTimer
_CFRunLoopGetCurrent
_CFRunLoopGetMain
_CFRunLoopRemoveTimer
_CFRunLoopTimerCreateWithHandler
_CFStringCompare
_CGWindowLevelForKey
_CTFontCreateUIFontForLanguage
_CallNextEventHandler
_CancelMenuTracking
_ChangeMenuAttributes
_CopyMenuTitleAsCFString
_CountMenuItems
_CreateEvent
_CreateNewMenu
_DeleteMenuItem
_EnableMenuItem
_GetApplicationEventTarget
_GetControlEventTarget
_GetCurrentEvent
_GetCurrentEventTime
_GetEventClass
_GetEventKind
_GetEventParameter
_GetMainEventQueue
_GetMenuAttributes
_GetMenuEventTarget
_GetMenuHandle
_GetMenuID
_GetMenuItemCommandID
_GetMenuItemHierarchicalMenu
_GetMenuItemProperty
_GetMenuTrackingData
_GetMenuType
_GetNextMenu
_GetPreviousMenu
_GetProcessPID
_GetThemeMetric
_GetWindowGroupOfClass
_HIMenuCopyParents
_HIMenuGetContentView
_HIMenuSetFont
_HIMenuSetSelection
_HIObjectGetEventTarget
_HIRectConvert
_HIViewFindByID
_HIViewGetBounds
_HPDHelpArticleResult
_HPDResultURLKey
_HPDResultUsesExternalViewerKey
_InsertMenuItemTextWithCFString
_InstallEventHandler
_KillProcess
_NSAccessibilityDescriptionAttribute
_NSAccessibilityMenuItemRole
_NSAccessibilityRoleAttribute
_NSAccessibilityTitleAttribute
_NSAccessibilityTitleUIElementAttribute
_NSAccessibilityValueAttribute
_NSApp
_NSApplicationLoad
_NSApplicationWillTerminateNotification
_NSBeep
_NSCopyObject
_NSDisableScreenUpdates
_NSDrawHelpResultsSeparator
_NSDrawOverlayForMenuHelpResults
_NSDrawThreePartImage
_NSEnableScreenUpdates
_NSEventTrackingRunLoopMode
_NSHelpManagerSystemBook
_NSIntersectionRect
_NSLocaleAlternateQuotationBeginDelimiterKey
_NSLocaleAlternateQuotationEndDelimiterKey
_NSLocaleQuotationBeginDelimiterKey
_NSLocaleQuotationEndDelimiterKey
_NSLog
_NSModalPanelRunLoopMode
_NSParagraphStyleAttributeName
_NSPointInRect
_NSRectFill
_NSRectFillUsingOperation
_NSRunAlertPanel
_NSSearchPathForDirectoriesInDomains
_NSSelectorFromString
_NSStringFromClass
_NSStringFromSelector
_NSUnionRect
_NSWindowDidBecomeKeyNotification
_NSWindowWillCloseNotification
_NSZeroRect
_OBJC_CLASS_$_HPDQuery
_OBJC_CLASS_$_HPDSearchManager
_OBJC_CLASS_$_NSAccessibilityAXUIElementWrapper
_OBJC_CLASS_$_NSAffineTransform
_OBJC_CLASS_$_NSAnimation
_OBJC_CLASS_$_NSApplication
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAttributedString
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBezierPath
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSButton
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSColor
_OBJC_CLASS_$_NSControl
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSImageCell
_OBJC_CLASS_$_NSIndexSet
_OBJC_CLASS_$_NSKeyBindingManager
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSMatrix
_OBJC_CLASS_$_NSMenuItem
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNib
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSParagraphStyle
_OBJC_CLASS_$_NSPopUpButton
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSResponder
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSScreen
_OBJC_CLASS_$_NSSearchField
_OBJC_CLASS_$_NSSegmentedControl
_OBJC_CLASS_$_NSShadow
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTabView
_OBJC_CLASS_$_NSTableRowView
_OBJC_CLASS_$_NSTableView
_OBJC_CLASS_$_NSTextField
_OBJC_CLASS_$_NSTextView
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSView
_OBJC_CLASS_$_NSWindow
_OBJC_CLASS_$_NSWorkspace
_OBJC_EHTYPE_$_NSException
_OBJC_METACLASS_$_NSAnimation
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSResponder
_OBJC_METACLASS_$_NSSearchField
_OBJC_METACLASS_$_NSTableRowView
_OBJC_METACLASS_$_NSTableView
_OBJC_METACLASS_$_NSView
_OBJC_METACLASS_$_NSWindow
_OSAtomicCompareAndSwapPtrBarrier
_PostFakeMenuSelectionEvent
_ReleaseEvent
_RemoveEventFromQueue
_RemoveEventHandler
_SetEventParameter
_SetMenuItemProperty
_SetMenuTitleWithCFString
_SetNextMenu
_SetWindowGroup
__Block_object_assign
__Block_object_dispose
__CloseMenu
__CopyMenuItemDataU
__CopyMenuItemTextAsCFStringU
__CountMenuItemsU
__GetCurrentMenuContext
__GetMenuItemBoundsU
__GetMenuItemHierarchicalMenuU
__HIMenuBarGetAppearance
__HIMenuPerformKeyboardNavigation
__HIMenuSetItemIndent
__HIMenuSetItemViewClass
__InstallEventLoopObserver
__IsMenuAlreadyPopulated
__IsMenuItemEnabledU
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__NSSetViewsPostSubviewHierarchyChangedNotifications
__NSWindowDidBecomeVisible
__OpenMenuWithOptions
__OpenSubmenuFromItem
__RemoveEventLoopObserver
__SimulateMenuClosed
__SimulateMenuOpening
__SimulateMenuSelectionU
__Unwind_Resume
___CFConstantStringClassReference
___bzero
___objc_personality_v0
___sincos_stret
___stack_chk_fail
___stack_chk_guard
__objc_empty_cache
_ceil
_dispatch_async
_dispatch_get_global_queue
_dlclose
_dlerror
_dlopen
_dlsym
_free
_getenv
_getpid
_kCFRunLoopCommonModes
_kHIViewWindowContentID
_malloc
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_begin_catch
_objc_end_catch
_objc_enumerationMutation
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_msgSendSuper2_stret
_objc_msgSend_stret
_objc_setProperty
_objc_sync_enter
_objc_sync_exit
_uregex_close
_uregex_end
_uregex_findNext
_uregex_group
_uregex_groupCount
_uregex_open
_uregex_setText
_uregex_start
dyld_stub_binder
