/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSectionTableViewController : UITableViewController {
    struct { 
        unsigned int numberOfSections; 
        unsigned int *indexToSection; 
        unsigned int *sectionToIndex; 
    }  _bufferedMap;
    struct { 
        unsigned int numberOfSections; 
        unsigned int *indexToSection; 
        unsigned int *sectionToIndex; 
    }  _currentMap;
    unsigned int  _numberOfSections;
}

- (BOOL)_recomputeMappedSections;
- (void)_swapBuffers;
- (void)dealloc;
- (unsigned int)indexForSection:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)initWithStyle:(int)arg1 numberOfSections:(unsigned int)arg2;
- (BOOL)isMappingValid;
- (BOOL)isSectionMapped:(unsigned int)arg1;
- (unsigned int)numberOfMappedSections;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)recomputeMappedSections;
- (BOOL)reloadData;
- (void)reloadSection:(unsigned int)arg1;
- (int)rowAnimationForDeletingSection:(unsigned int)arg1;
- (int)rowAnimationForInsertingSection:(unsigned int)arg1;
- (int)rowAnimationForReloadingSection:(unsigned int)arg1;
- (unsigned int)sectionForIndex:(unsigned int)arg1;
- (BOOL)shouldMapSection:(unsigned int)arg1;
- (void)viewDidLoad;

@end
