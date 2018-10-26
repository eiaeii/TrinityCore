#ifndef TRINITY_SPELLATTRIBUTES_H
#define TRINITY_SPELLATTRIBUTES_H

#include <QGroupBox>
#include "Define.h"

class QStackedWidget;
struct SpellEntry;
class SpellAttributesOverview;
template <typename E>
class SpellAttributesPage;

enum SpellAttr0 : uint32;
enum SpellAttr1 : uint32;
enum SpellAttr2 : uint32;
enum SpellAttr3 : uint32;
enum SpellAttr4 : uint32;
enum SpellAttr5 : uint32;
enum SpellAttr6 : uint32;
enum SpellAttr7 : uint32;

class SpellAttributes : public QGroupBox
{
    Q_OBJECT

    public:
        SpellAttributes(QWidget* parent = nullptr) : QGroupBox(parent) {}
        void Setup();
        void SetEntry(SpellEntry const*);
        void BuildEntry(SpellEntry&) const;

    Q_SIGNALS:
        void ValueChanged();

    public Q_SLOTS:
        void RedrawOverviewPage();
        
    private:
        QStackedWidget*                  _pageSelector;
        SpellAttributesOverview*         _overview;
        SpellAttributesPage<SpellAttr0>* _page0;
        SpellAttributesPage<SpellAttr1>* _page1;
        SpellAttributesPage<SpellAttr2>* _page2;
        SpellAttributesPage<SpellAttr3>* _page3;
        SpellAttributesPage<SpellAttr4>* _page4;
        SpellAttributesPage<SpellAttr5>* _page5;
        SpellAttributesPage<SpellAttr6>* _page6;
        SpellAttributesPage<SpellAttr7>* _page7;
};

#endif
